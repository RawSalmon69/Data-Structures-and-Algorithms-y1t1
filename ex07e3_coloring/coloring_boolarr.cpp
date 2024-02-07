#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,E,a,b;
    cin >> N >> E;
    bool arr[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            arr[i][j] = false;
        }
    }
    int color[N];
    vector<int> checkmax[N];
    for(int i=0;i<N;i++) color[i] = 0;
    for(int i=0;i<E;i++){
        cin >> a >> b;
        arr[a][b]=true;
        checkmax[a].push_back(b);
        arr[b][a]=true;
        checkmax[b].push_back(a);
    }
    for(int i=0;i<N;i++){
        for(int j=i;j<N;j++){
            if(arr[i][j]==true){
                if(color[i]==color[j]) color[j]++;
            }
        }
    }
    for(int i=N-1;i>=0;i--){
        for(int j=i;j>=0;j--){
            if(arr[i][j]==true){
                if(color[i]==color[j]) color[j]++;
            }
        }
    }
    set<int> ans;
    for(auto &i:color){
        ans.insert(i);
    }
    int MAXCON=0;
    for(int i=0;i<N;i++){
        // cout << "cmax :" << checkmax[i].size() << endl;
        if(MAXCON < checkmax[i].size()) MAXCON=checkmax[i].size();
    }
     cout << MAXCON << endl;
    if(MAXCON==2) cout << 2;
    else cout << ans.size();
    return 0;
}