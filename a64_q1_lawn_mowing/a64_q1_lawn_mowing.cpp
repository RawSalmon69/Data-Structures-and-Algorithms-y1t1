#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k,temp;
    cin >> n >> m >> k;
    vector<int> v,prefix;
    int sum=k;
    for(int i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    for(auto itr: v){
        sum+=itr;
        prefix.push_back(sum);
    }
    int a,b;
    while(m--){
        cin >> a >> b;
        vector<int> temp=prefix;
        for(int i=a;i<prefix.size();i++){
            temp[i]-=prefix[a];
        }   
        auto start = temp.begin();
        int count=a;
        while(count--){
            start++;
        }
        // for(int i=0;i<temp.size();i++){
        //     cout << temp[i] << " ";
        // }
        auto index=upper_bound(start,temp.end(),b);
        //cout << endl <<index-start << " ";
        int sum=0;
        for(int i=a;i<a+index-start-1;i++){
            sum+=v[i];
        }
        cout << sum;
    }
    
    return 0;
}