#include<bits/stdc++.h>
using namespace std;
int t, n, i, a[2000], mx, l, x, y, ans;
void calc(int d) {
	for (x = y = 0, l = 1; x < n; x++)
		if (a[x] == d) return;
		else if (d % a[x] == 0) l = l / __gcd(l, a[x]) * a[x], y++;
	if (l == d) ans = max(ans, y);
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	cin >> t;
	while (t--) {
		for (cin >> n, i = mx = ans = 0; i < n; i++) cin >> a[i], mx = max(mx, a[i]);
		for (i = 0; i < n && !ans; i++) if (mx % a[i]) ans = n;
		for (i = 2; i * i <= mx && ans < n; i++) if (mx % i == 0) calc(i), calc(mx / i);
		cout << ans << "\n";
	}
	return 0;
}
