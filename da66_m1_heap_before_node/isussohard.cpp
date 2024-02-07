#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    set<int> ans;
    //int tier=0;
    if(m==0){
        cout << "0";
        return 0;
    }
    for(int i=0;i<n;i++) ans.insert(i);

    // int mtier;
    // for(int i=0;i<n;i++){
    //     if(m<pow(2,i)){
    //         mtier = i;
    //         break;
    //     }
    // }
    
    int runner=1;
    ans.erase(m);
    bool checktrue = true;
    while(checktrue){
        m=(2*m)+1;
        if(m>=n){
            break;
        }else{
            ans.erase(m);
        }
        for(int i=1;i<pow(2,runner);i++){
            if((m+i)<n){
                ans.erase(m+i);
            }else{
                checktrue=false;
                break;
            }
        }
        runner++;
    }
    cout << ans.size() << endl;
    for(auto& e: ans){
        cout << e << " ";
    }
    return 0;
    //i -> 2(i)+1 , 2(i)+2
}

        //             0
        //         1       2
        //     3      4  5     6
        // 7     8  9 10 11 12 13 14