#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  mCap = mSize + (last - first);
  T* newArr = new T[mCap]();
  size_t count = 0;
  for(auto itr = mData; itr != mData + mSize; itr++ ){
    if(itr == position){
      for(auto itr2 = first; itr2 != last;itr2++){
        newArr[count++]=*itr2;  
      }
    }
    newArr[count++]=*itr;
  }
  if(position == mData+mSize){
    for(auto itr3=first; itr3!= last;itr3++){
      newArr[count++]=*itr3;
    }
  }
  delete[] mData;
  mData = newArr;
  mSize = mCap;
}
#endif
