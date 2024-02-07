#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin >> n;
    set<long long int> set1,set2;
    for(long long int i=1;i<=n;i++){
        set1.insert(i);
    }
    long long int temp;
    for(long long int i=0;i<n;i++){
        cin >> temp;
        set2.insert(temp);
    }
    if(set1==set2){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}