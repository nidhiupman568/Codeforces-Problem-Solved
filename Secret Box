#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define file "file"
#define endl '\n'
const int maxn = 1e6;
const ll mod = 1e9+7;
const bool is_multitest = 1;
 
void solve(){
    ll x,y,z,k; cin >> x >> y >> z >> k;
    if (x > y) swap(x,y);
    if (x > z) swap(x,z);
    if (y > z) swap(y,z);
    ll res = 0;
    for(ll c1 = 1; c1*c1*c1 <= k && c1 <= x; c1++) {
        for(ll c2 = c1; c2*c2*c1 <= k && c2 <= y; c2++) {
            if (k%(c1*c2) == 0) {
                ll c3 = k/c1/c2;
                if (c3 <= z) {
                    res = max(res,(x-c1+1)*(y-c2+1)*(z-c3+1));
                }
            }
        }
    }
    cout << res << endl;
}   
  
 
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL), cout.tie(NULL);
    if(fopen(file".inp","r")) {
        freopen(file".inp","r",stdin);
        freopen(file".out","w",stdout);
    } 
 
    int t = 1; if (is_multitest) cin >> t;
    while(t--) solve();
}
