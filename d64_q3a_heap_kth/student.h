#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything
  if(k==2){
    if(mLess(mData[1],mData[2])) return mData[2];
    return mData[1];
  }
  if(k==3){
    T temp;
    if(mLess(mData[1],mData[2])) temp = mData[1]; 
    else temp = mData[2];
    for(int i=3;i<7;i++){
      if(mLess(temp,mData[i])) temp = mData[i];
    }
    return temp;
  }
  return mData[0];
}

#endif
