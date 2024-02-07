#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    T hee[b+1];
    int sizeHee = b+1;
    for(int i=0;i<sizeHee;i++){
        hee[i]=top();
        pop();
    }
    int count = b-a+1;
    for(int i=sizeHee-1;i>=0;i--){
        push(hee[i]);
        if(count>0) {
            push(hee[i]);
            count--;
        }
    }
}

#endif