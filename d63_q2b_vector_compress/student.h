#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::compress() {
    //write your code here
    T *newArr = new T[mSize]();
    for(size_t i=0;i<mSize;i++){
        newArr[i] = mData[i];
    }
    delete[] mData;
    mData = newArr;
    mCap = mSize;
#endif
} 