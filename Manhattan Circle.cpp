#include <bits/stdc++.h>
#define FOR(a, b, c) for(int a = b; a < c; ++a)
#define FOREQ(a, b, c) for(int a = b; a <= c; ++a)
#define mFOR(a, b, c) for(int a = b; a > c; --a)
#define mFOREQ(a, b, c) for(int a = b; a >= c; --a)
#define FOREACH(a, b) for (auto &a : b)
#define CIN(arr, c) FOR(i, 0, c) cin >> arr[i] 
#define all(x) x.begin(), x.end()
#define pb push_back
#define ll long long
using namespace std;
 
static const auto __optimize__ = []() 
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    return 0;
};
 
void solve()
{
	int n, m;
	cin >> n >> m;
 
	char grid;
 
	int sr = 0, er = 0;
	int sc = 0, ec = 0;
 
	FOR(i, 0, n)
	{
		FOR(j, 0, m) 
		{
			cin >> grid;
 
			if ((sr == 0 || sc == 0) && grid == '#') 
				sr = i + 1, er = i + 1, sc = j + 1, ec = j + 1;
			else if (grid == '#')
			{
				er = i + 1;
				sc = min(sc, j + 1);
				ec = max(ec, j + 1);
			}
		}
	}
 
	cout << (er + sr)/2 << ' ' << (ec + sc)/2 << '\n';
}
 
 
int main()
{
	int t;
	cin >> t;
	
	while (t--) solve();
 
    return 0;
}
