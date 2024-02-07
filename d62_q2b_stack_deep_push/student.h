#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::stack<T>::deep_push(size_t pos,const T& value) {
  //write your code here
  //ensureCapacity(mSize + 1);
  mCap=mCap*2;
  mData[mSize]=value;
  mSize++;
  int p = pos;
  auto itr = mSize - 1;
  while(p){
    std::swap(mData[itr],mData[itr-1]);
    p--;
    --itr;
  }
  
}

#endif
