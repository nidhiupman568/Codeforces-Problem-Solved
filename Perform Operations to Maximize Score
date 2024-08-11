#include <bits/stdc++.h>
#define int long long
#define f first
#define s second
using namespace std;
signed main() {
    int t; cin >> t;
    while(t--) {
    	int n, k; cin >> n >> k;
    	vector<pair<int,int>> v(n);
    	for(int i=0;i<n;i++) cin >> v[i].f;
    	for(int i=0;i<n;i++) cin >> v[i].s;
    	sort(begin(v),end(v)); int ans = 0;
    	for(int i=0;i<n;i++) if(v[i].s) {
    		int x; if(i < n/2) x = v[n/2].f; else x = v[(n-2)/2].f;
    		ans = max(ans, v[i].f+x+k);
    	}
    	int l = 0, r = 2e9;
    	while(l<r) {
    		int m = (l+r+1)/2, c = 0, q = k;
    		for(int i=n-2;i>=0;i--) {
    			if(v[i].f >= m) c++;
    			else if(v[i].s && v[i].f+q >= m) q -= m-v[i].f, c++;
    		}
    		if(c < (n+1)/2) r = m-1;
    		else l = m;
    	}
    	cout << max(ans, l+v[n-1].f) << '\n';
    }
}
