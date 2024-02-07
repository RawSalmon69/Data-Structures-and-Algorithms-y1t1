void replace(const T& x, list<T>& y) {
  //write your code here
  iterator itr = mHeader->next;
  while(itr!=mHeader){
    if(*itr == x){
      itr=erase(itr);
      for(auto &e : y){
        insert(itr,e);
      }
    }else{
      itr++;
    }
  }
}
