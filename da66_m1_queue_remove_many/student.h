#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <bits/stdc++.h>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  // your code here
  std::queue<T> temp;
  int n=mSize;
  int index=0, pi=0;
  sort(pos.begin(),pos.end());
  while(n--){
    if(index==pos[pi]){
      pop();
      pi++;
      index++;
    }else{
      temp.push(front());
      pop();
      index++;
    }
  }
  int tempSize=temp.size();
  while(tempSize--){
    push(temp.front());
    temp.pop();
  }

}

#endif
