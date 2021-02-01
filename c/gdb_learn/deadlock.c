#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

static pthread_mutex_t mutex1;
static pthread_mutex_t mutex2;

static void *func1(void *arg)
{
    printf("enter %s\n", __FUNCTION__);

    pthread_mutex_lock(&mutex1);
    usleep(1000);
    pthread_mutex_lock(&mutex2);
    pthread_mutex_unlock(&mutex2);
    pthread_mutex_unlock(&mutex1);

    printf("leave %s\n", __FUNCTION__);
    return NULL;
}

static void *func2(void *arg)
{
    printf("enter %s\n", __FUNCTION__);

    pthread_mutex_lock(&mutex2);
    usleep(1000);
    pthread_mutex_lock(&mutex1);
    pthread_mutex_unlock(&mutex1);
    pthread_mutex_unlock(&mutex2);

    printf("leave %s\n", __FUNCTION__);
    return NULL;
}

static void *func_yield(void *arg) {
    printf("enter %s\n", __FUNCTION__);

    while (1)
    {
        sched_yield();
    }

    printf("leave %s\n", __FUNCTION__);
    return NULL;
}

int main()
{
    pthread_t thread;
    pthread_attr_t attr;
    int num = 0;

    pthread_mutex_init(&mutex1, NULL);
    pthread_mutex_init(&mutex2, NULL);
    pthread_attr_init(&attr);

    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED);
    pthread_create(&thread, &attr, func1, NULL);
    pthread_create(&thread, &attr, func2, NULL);
    for (num = 0; num < 10; num++)
    {
        pthread_create(&thread, &attr, func_yield, NULL);
    }

    while (1)
    {
        sched_yield();
    }

    return 0;
}