#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  //mCap = mSize + data.size();
  ensureCapacity(mSize + data.size());
  T *newArr = new T[mCap]();
  sort(data.begin(),data.begin()+data.size());
  auto runner = data.begin();
  int count = 0,mDatanum=0;
  for(auto itr=mData;itr!=mData+mSize;itr++){
    if(runner->first == mDatanum){ //(*runner).first()
      newArr[count++]=runner->second;
      runner++;
    }
    newArr[count++]=*itr;
    mDatanum++;
  }
  if(runner->first == mSize){
    newArr[count++]=runner->second;
  }
  delete[] mData;
  mData = newArr;
  //mSize = mCap;
  mSize = mSize+data.size();
}

#endif
