#include<bits/stdc++.h>
#define int long long
#define pb push_back
#define fi first
#define se second
#define endl '\n'
 
#define all(a) (a).begin(), (a).end()
#define pii pair<int,int>
using namespace std;
 
/*
Thinks to look up for ?
 
1. brute force may be
2. try to manipulate the given equation
3. think in terms of even odd
4. think prefix sums
5. try to keep the solution simple
6. think graph
7. reverse thinking
*/
 
const int N =1e5+5;
const int INF =1e18;
const int dx[]= {-1,1,0,0};
const int dy[]= {0,0,-1,1};
 
void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int ans=INF;
    for (int i =1;i<=10;i++) {
        ans = min(ans,abs(i-a)+abs(i-b)+abs(i-c));
    }
    cout<<ans<<endl;
 
    return; 
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    solve();
    return 0;
}
