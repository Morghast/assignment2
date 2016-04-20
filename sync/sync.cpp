//Rob Davis's awesome thread sync program

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <pthread.h>
#include <string>
#include <mutex>

using namespace std;

typedef struct thread_attributes
{
    pthread_mutex_t lock;
}thread_attributes;

void * kinder_thread(void *arg)
{
    string* input;
    
    cout << "This is kinder\n"; 
    input = static_cast<string*>(arg);
    cout << *input;
    pthread_exit(NULL);
}

int main()
{
    string input;    
    pthread_t my_thread;
    int result;
    
    cout << "In main: creating thread\n";
    result = pthread_create(&my_thread, NULL, &kinder_thread, &input);
    if(result != 0)
    {
        cout << "Error: pthread_create() failed\n";
        exit(EXIT_FAILURE);
    }
    cin >> input;
    //cout << 
    
    pthread_exit(NULL);
}