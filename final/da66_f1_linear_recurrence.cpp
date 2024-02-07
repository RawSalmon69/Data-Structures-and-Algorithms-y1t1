#include <bits/stdc++.h>
using namespace std;
long long recur(int k, int i, vector<int> &c, vector<int> &a, map<int,int> &r){
    if(i>=k) {
        auto it = r.find(i);
        if(it!=r.end()){
            return it->second;
        }
        int count=1;
        long long temp=0;
        int minus=1;
        while(minus<=k){
            //cout << "i-minus :" << i-minus << endl;
            temp+=c[count]*recur(k,i-minus,c,a,r);
            //cout << " minus :" << minus << " count :" << count << " temp :" << temp << endl;
            minus++;
            count++;
        }
        r.insert(make_pair(i,temp%32717));
        return temp%32717;
    }
    else{
        return a[i]%32717;
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int k,n;
    cin >> k >> n;
    vector<int> c,a;
    map<int,int> r;
    c.push_back(0);
    int temp;
    for(int i=0;i<k;i++){
        cin >> temp;
        c.push_back(temp);
    }
    for(int i=0;i<k;i++){
        cin >> temp;
        a.push_back(temp);
    }
    cout << recur(k,n,c,a,r)%32717;
    return 0;
}