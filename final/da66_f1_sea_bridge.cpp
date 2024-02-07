#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,c,temp,r1,c1;
    cin >> r >> c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){   
            cin >> temp;
            arr[i][j]=temp;
            if(temp==1){
                r1=i;
                c1=j;
            }
        }
    }
    int mini=INT_MAX;
    for(int i=0;i<r;i++){
        if(arr[i][c1]==2){
            int length = max(i,r1) - min(i,r1) +1;
            if(length < mini) mini=length;
        } 
    }
    for(int i=0;i<c;i++){
        if(arr[r1][i]==2){
            int length = max(i,c1) - min(i,c1) +1;
            if(length < mini) mini=length;
        } 
    }
    cout << mini;    
    return 0;
}