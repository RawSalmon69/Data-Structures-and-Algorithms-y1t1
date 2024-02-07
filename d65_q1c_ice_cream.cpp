#include <bits/stdc++.h>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m,start;
    cin >> n >> m >> start;
    vector<pair<int,int>> mChange, mScam;
    for(int i=0;i<n;i++){
        int date,newMoney;
        cin >> date >> newMoney;
        mChange.push_back(make_pair(date,newMoney));
    }
    for(int i=0;i<m;i++){
        int iPrice,scamDate;
        cin >> iPrice >> scamDate;
        mScam.push_back(make_pair(iPrice,scamDate));
    }

    sort(mChange.begin(),mChange.end());
    //sort(mScam.begin(),mScam.begin()+mScam.size());

    auto itrScam = mScam.begin();
    auto itrChange = mChange.begin();

    for(int i=0;i<m;i++){
        int count = 0,buyable = 0,collected=0,useStart=1,useNow=0;
        while(buyable==0){
            if(itrChange->first == count){
                useStart=0;
                useNow = itrChange->second;
            }
            if((itrChange+1)->first == count){
                itrChange++;
                useNow = itrChange->second;
            }
            if(useStart==1){
                collected+=start;
            }else{
                collected+=useNow;
            }
            if(collected>=itrScam->first){
                cout << count << " ";
                buyable = 1;
                break;
            }
            if(count == itrScam->second){
                collected=0;
            }
            count++;
        }
        itrScam++;
        count=0;
        collected=0;
    }
    return 0;
}