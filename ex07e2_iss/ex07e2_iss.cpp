#include <bits/stdc++.h>
int n,cnt=0;

using namespace std;

void myRecur(int sum, int cur){
    if(sum==n){
        cnt++;
    }
    if(sum<n){
        for(int i = cur; i<=n; i++){
            myRecur(sum+i, i);
        }
    }
    return;
}
int main(){
    cin >> n;
    int sum=0;
    myRecur(sum,1);
    cout << cnt;
    return 0;
}