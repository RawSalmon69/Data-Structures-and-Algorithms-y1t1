#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v[2*n-1];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int a; cin >> a;
            v[i-j+n-1].push_back(a);
        }
    }
    int max=INT_MIN;
    for(int i=0;i<2*n-1;i++){
        int sum=0;
        for(auto itr : v[i]){
            sum+=itr;
            if(sum<0) sum=0;
            if(sum>max) max=sum;
        }
    }
    cout << max;
    return 0;
}