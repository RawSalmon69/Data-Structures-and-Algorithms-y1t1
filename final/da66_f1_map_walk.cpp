#include <bits/stdc++.h>
using namespace std;
int trymove(vector<int> arr[], int r, int c, int nr, int nc, string sum){
    if(((r)==nr+1) && ((c)==nc+1)){
//        cout << nr << nc << endl;
        cout << sum << "\n";
        return 0;
    }else if(arr[nr][nc]==0 && nr<r && nc<c){
        return 1;
    }
}
void solve(vector<int> arr[], int r, int c, int nr, int nc, string sum){
    if (trymove(arr,r,c,nr+1,nc,sum)){
        solve(arr,r,c,nr+1,nc,sum+='B');
//        cout <<"solveB" << endl;
    }
    if (trymove(arr,r,c,nr,nc+1,sum)){
        solve(arr,r,c,nr,nc+1,sum+='A');
//        cout <<"solveA" << endl;
    }
}
int main(){
    int r,c,temp;
    cin >> r >> c;
    vector<int> arr[r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> temp;
            arr[i].push_back(temp);
        }
    }
    string path="";
    solve(arr,r,c,0,0,path);
    cout << "DONE";
    return 0;
}