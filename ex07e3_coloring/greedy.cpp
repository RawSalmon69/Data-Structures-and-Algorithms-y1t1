#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,E,a,b;
    set<int> adjlist[51];
    cin >> N >> E;
    for(int i=0;i<E;i++){
        cin >> a >> b;
        adjlist[a].insert(b);
        adjlist[b].insert(a);
    }
    int node[N];
    node[0]=0;
    for(int i=1;i<N;i++) node[i]=-1;
    bool used[N];
    for(int i=0;i<N;i++) used[i]=false;

    // cout <<"checklist" << endl; 
    // for(int i=0;i<N;i++){
    //     cout << "connected to " << i << " : ";
    //     for(auto itr : adjlist[i]){
    //         cout << itr << " ";
    //     }
    // }
    // cout << endl <<"endcheck "<<endl;

    for(int i=1;i<N;i++){
        auto itr=adjlist[i].begin();
        while(itr!=adjlist[i].end()){
            if(node[*itr]!=-1) used[node[*itr]]=true;
            // cout << "node " << *itr << " : " << node[*itr] << endl;
            // cout << "used :" << used[node[*itr]] << endl;
            itr++;
        }
        // cout << "end section" << endl;
        for(int findusable=0;findusable<N;findusable++){
            if(used[findusable] == false) {
                node[i]=findusable;
                // cout << " node : " << i << " : "<<  node[i] <<endl;
                break;
            }
        }

        for(itr=adjlist[i].begin();itr!=adjlist[i].end();itr++)
            if(node[*itr]!=-1)
                used[node[*itr]] = false;
    }
    set<int> colors;
    for(int i=0;i<N;i++){
        // cout << node[i] << " ";
        // cout << endl;
        colors.insert(node[i]);
    }
    cout << colors.size();
    


    return 0;
}