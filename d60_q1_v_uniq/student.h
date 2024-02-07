#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>
//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  std::set<T> s;
  vector<T> v;
  for(auto &x : *this){
    if(s.find(x) == s.end()){
      s.insert(x);
      v.push_back(x);
    }
  }
  *this = v;
}

#endif
