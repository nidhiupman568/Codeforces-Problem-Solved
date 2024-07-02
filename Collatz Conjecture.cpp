#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ull unsigned long long
#define ll long long 
const int N = 1e5+10, INF = 100, NN = 1e3+10, NNN = 128+3;
 
int main(){
    // freopen("comb.in", "r", stdin);
    // freopen("comb.out", "w", stdout);
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
   
    int t;
    cin >> t;
    while(t--){
        long long x, y, k;
        cin >> x >> y >> k;
        k--;
        x++;
        while(true) {
            long long need = y * (x/y + (x%y==0 ? 0 : 1)) - x;
            if(need > k) {
                cout << x+k << '\n';
                break;
            }
            else if(x <= y) {
                int first = y-x;
                k -= first;
                x = 1;
                k %= (y-1);
                x += k;
                if(x % y == 0 && x!=0) {
                    while(x%y==0) x/=y;
                }
                cout << x << '\n';
                break;
            }
            else {
                x += need;
                k -= need;
                while(x%y==0) x/=y;
            }
        }
        
    }
}
