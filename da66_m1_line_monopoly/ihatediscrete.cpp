#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n;
    cin >> n;
    int input;
    multiset<int> bought;
    for(int i=0;i<n;i++){
        cin >> input;
        if(input == 1){
            int first,second;
            cin >> first >> second;
            bought.insert(first);
            bought.insert(second);
        }else{
            set<int> begin;
            //set<int> stop;
            auto itr = bought.begin();
            for(int i=0;i<bought.size();i++){
                if(begin.empty()){
                    begin.insert(*itr);
                    itr++;
                    continue;
                }
                auto next = itr;
                next++;
                if(bought.count(*itr)==1 && (*(next)!=(*itr)+1)){
                    begin.insert(*itr);
                }
                itr++;
            }
            cout << begin.size()/2 << "\n";
            //for(auto &e : begin) cout << e << " ";
        }
    } 
    return 0;
}