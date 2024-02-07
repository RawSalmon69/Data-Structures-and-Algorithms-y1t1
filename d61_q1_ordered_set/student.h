#include <vector>
using namespace std;

int maxLen = 100000;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v = A;
    bool check[maxLen] = {false};
    for(auto x : A){
        check[x] = true;
    }
    for(auto x : B){
        if(check[x] != true){
            v.push_back(x);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    bool check[maxLen] = {false};
    for(auto x : B){
        check[x] = true;
    }
    for(auto x : A){
        if(check[x] == true){
            v.push_back(x);
        }
    }
    return v;
}
