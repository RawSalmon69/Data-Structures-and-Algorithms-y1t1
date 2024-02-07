#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,m,temp,a,b;
    cin >> n >> m;
    int ci[n],co[n];
    vector<int> path[n];
    for(int i=0;i<n;i++){
        cin >> temp;
        ci[i] = temp;
    }
    for(int i=0;i<n;i++){
        cin >> temp;
        co[i] = temp;
    }
    for(int i=0;i<m;i++){
        cin >> a >> b;
        path[a].push_back(b);
    }
    int min[n],mincost=INT_MAX;
    for(int i=0;i<n;i++){
        min[i]=-999;
    }
    min[0]=0;
    for(int i=0;i<n;i++){
        for(auto itr: path[i]){
            if(min[i]+co[i]+ci[itr] < mincost){
                mincost=min[i]+co[i]+ci[itr];
                min[itr]=mincost;
            }
            mincost = INT_MAX;
        }
    }
    min[0]=0;
    for(int i=0;i<n;i++){
        if(min[i]!=-999) cout << min[i] << " ";
        else cout <<"-1 ";
    }
    return 0;
}