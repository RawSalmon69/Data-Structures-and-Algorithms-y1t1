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
            for(int i=first;i<=second;i++){
                bought.insert(i);
            }
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
                auto prev = itr;
                prev--;
                if(bought.count(*itr)==1 && (bought.count(*itr+1)==0 || bought.count(*itr-1)==0)){
                    begin.insert(*itr);
                }

                // if(bought.count(*itr)==2 && bought.count(*itr+1)==0 && bought.count(*itr-1)==0){
                //     samecount++;
                // }

                itr++;
            }
            auto last = bought.end();
            last--;
            if(bought.count(*last)!=1){
                begin.insert(*last);
            }
            //cout << *last << "end\n";
            if(begin.size()%2==0){
                cout << begin.size()/2 << "\n";
            }
            else{
                cout << (begin.size()/2)+1 << "\n";
            }
            //cout << begin.size()/2 + samecount<< "\n";
            //for(auto &e : begin) cout << e << " ";
        }
    } 
    return 0;
}
/*

1 2 3    6 7 8
1 1 1    1 1 1

1 2 3 4 5 6 7 8 9
1 2 2 2 2 2 1 1

1 2 3 3 3 3 2 2 1
              


*/