#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  T *newArr = new T[mSize]();
  size_t index=0,count = 0;
  for(size_t i=0;i<mSize;i++){
      if(i==pos[index] && index<pos.size()){
        index++;
        continue;  
      }
      newArr[count] = mData[i];
      count++;
    }
    delete[] mData;
    mData = newArr;
    mSize -= pos.size();
    mCap = mSize;
}

#endif
