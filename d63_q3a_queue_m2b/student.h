#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::move_to_back(size_t pos) {
  //write your code here
  while((mFront + pos)%mCap != (mFront+mSize-1)%mCap){
    std::swap(mData[(mFront+pos)%mCap],mData[(mFront+pos+1)%mCap]);
    pos++;
  }
}

#endif
