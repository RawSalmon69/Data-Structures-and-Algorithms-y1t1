#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    map<string,int> map;
    string name;
    for(int i=0;i<n;i++) {
        cin >> name;
        if(map.count(name)>0){
            map[name]++;
        }else map[name]=1;
    }
    priority_queue<int> pq;
    for(auto itr=map.begin();itr!=map.end();itr++){
        pq.push(itr->second);
    }
    if(m>=pq.size()){
        int temp;
        while(!pq.empty()){
            temp = pq.top();
            pq.pop();
        }
        cout << temp;
    }else{
        int temp;
        while(m--){
            temp = pq.top();
            pq.pop();
        }
        cout << temp;
    }
    return 0;
}