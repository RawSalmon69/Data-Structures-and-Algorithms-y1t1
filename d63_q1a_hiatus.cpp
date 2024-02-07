#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m; cin >> n >> m;
    int a,b;
    vector<int> history(n);
    while(n--){
        cin >> a >> b;
        history[n] = (a*100) + b;
    }
    int query;
    sort(history.begin(),history.end());
    while(m--){
        cin >> a >> b;
        query = (a*100) + b;
        auto x = lower_bound(history.begin(),history.end(),query);
        if(*x == query){
            cout << "0 0 ";
        }else if(query < *(history.begin())){
            cout << "-1 -1 ";
        }else{
            cout << (*--x)/100 << " " << (*x)%100 << " ";
        }
    }
    return 0;
}