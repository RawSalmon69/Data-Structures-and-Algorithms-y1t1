#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n,m,start;
    cin >> n >> m >> start;
    vector<int>q(100003);
    while (n--)
    {
        int a,x;
        cin >> a >> x;
        q[a]=x;
    }
    for (int i = 0; i <= 100002; ++i)
    {
        q[i]=(start=q[i]?:start) +q[i-1];
    }
    while (m--)
    {
        int P,x;
        cin >> P >> x;
        cout << (q[x]>=P?lower_bound(q.begin(),q.begin()+x+1,P):
        lower_bound(q.begin()+x,q.end(),P+q[x])) -q.begin() << " ";
    }
    return 0;
}
