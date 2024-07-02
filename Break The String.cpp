using namespace std;
#include <bits/stdc++.h>
#define int long long
#define pb push_back
#define all(x) x.begin(), x.end()
#define float long double
#define double long double
#define sortall(x) sort(all(x))
#define sz(a) (int)(a).size()
const int MOD = 1e9 + 9;
int hashs[300005], pows[300005];
//<--------------------------------------------------------------------------------->

int getHash(int l, int r)
{
  return ((hashs[r + 1] - (hashs[l] * pows[r - l + 1]) % MOD) + MOD) % MOD;
}
void solve()
{
  int n;
  string s;
  cin >> s;
  n = sz(s);
  if (n % 2)
  {
    cout << 0 << "\n";
    return;
  }
  int p = 331;
  for (int i = 0; i < n; i++)
  {
    hashs[i + 1] = (hashs[i] * p + s[i]) % MOD;
  }

  int count = 0;
  for (int i = 0; i < n/2; i ++)
  {
    int l1 = 0, r1 = i;       // T1
    int l2 = r1+1, r2 = l2 + i;      // T2
    int l3 = r2+1 , r3 = i + n/2; // T3
    int l4 = r3+1, r4 = n - 1;      // T3
    if (getHash(l1, r1) == getHash(l2, r2) && getHash(l3, r3) == getHash(l4, r4))
    {
      
      count++;
    }
  }
  if(getHash(0, n/2-1) == getHash(n/2, n-1))count++;
  cout<<count<<"\n";
}

int32_t main()
{
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  int i = 0, j = 0;
  int t = 1;
  cin >> t;
  int p = 331;
  pows[0] = 1;
  for (int i = 1; i < 300005; i++)
  {
    pows[i] = (pows[i - 1] * p) % MOD;
  }
  while (t--)
  {
    solve();
  }
  return 0;
}
