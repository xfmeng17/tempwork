#include<iostream>  
#include<pthread.h>  
using namespace std;  

pthread_once_t once = PTHREAD_ONCE_INIT;  

void once_run(void)  
{  
	cout<<"once_run in thread "<<pthread_self()<<endl;  
}  

void * child1(void * arg)  
{  
	pthread_t tid =pthread_self();  
	cout<<"thread "<<tid<<" enter"<<endl;  
	pthread_once(&once,once_run);  
	cout<<"thread "<<tid<<" return"<<endl;  
}  


void * child2(void * arg)  
{  
	pthread_t tid =pthread_self();  
	cout<<"thread "<<tid<<" enter"<<endl;  
	pthread_once(&once,once_run);  
	cout<<"thread "<<tid<<" return"<<endl;  
}  

int main(void)  
{  
	pthread_t tid1,tid2;  
	cout<<"hello"<<endl;  
	pthread_create(&tid1,NULL,child1,NULL);  
	pthread_create(&tid2,NULL,child2,NULL);  
	pthread_join(tid1, NULL);
	pthread_join(tid2, NULL);
	cout<<"main thread exit"<<endl;  
	return 0;  
}
