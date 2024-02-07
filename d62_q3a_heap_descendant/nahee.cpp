#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> vec;
    vec.push_back(m);
    int count=1;
    bool tRue=true;
    while(tRue){
        m=m*2+1;
        if(m<n)
            vec.push_back(m);
            else break;
        for(int i=1;i<pow(2,count);i++){
            if(m+i<n) vec.push_back(m+i);
            else {
                tRue = false;
                break;
            };
        }
        count++;
        if(tRue == false) break;
    }
    cout << vec.size() << endl;
    for(auto i : vec) cout << i << " ";
    return 0;
}