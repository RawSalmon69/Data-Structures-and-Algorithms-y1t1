#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::list<T>::merge(CP::list<CP::list<T>> &ls) {
  //write your code here
  for(auto &e : ls){
    mHeader->prev->next = e.begin().ptr;
    e.begin().ptr->prev = mHeader->prev;
    mHeader->prev=e.end().ptr->prev;
    e.end().ptr->prev->next = mHeader;
    e.mHeader->next = e.mHeader;
    e.mHeader->prev = e.mHeader;
    mSize+=e.mSize;
    e.mSize=0;
  }
}

#endif
