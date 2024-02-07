#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  if(a>b) std::swap(a,b);
  if(m == 0 || a < begin() || b < begin() || a + m - 1 >= b  || b + m - 1 >= end()) 
    return false;
  while(m--) 
    std::swap(*(a+m), *(b+m));
  
  return true;
}

#endif