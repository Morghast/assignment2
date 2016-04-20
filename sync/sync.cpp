//Rob Davis's awesome thread sync program

#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <pthread.h>
#include <string>

using namespace std;

void * kinder_thread(void *arg)
{
    string* input;
    
    cout << "This is kinder\n"; 
    input = static_cast<string*>(arg);
    pthread_exit(NULL);
    cout << *input;
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