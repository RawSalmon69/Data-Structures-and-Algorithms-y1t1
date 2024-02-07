#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v, vector<int>::iterator a, vector<int>::iterator b) {
  // write your code only in this function
  vector<int> temp;
  for(auto itr = a; itr !=b; itr++){
    temp.push_back(*itr);
  }
  size_t i = (temp.size()-1);
  for(auto itr = a; itr != b ; itr++){
    *itr = temp[i];
    i--;
  }
}
int main() {
  // read input
  int n, a, b;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int c;
    cin >> c;
    v.push_back(c);
  }
  cin >> a >> b;
  // call function
  reverse(v, v.begin() + a, v.begin() + b + 1);
  // display content of the vector
  for (auto &x : v) {
    cout << x << " ";
  }
  cout << endl;
}