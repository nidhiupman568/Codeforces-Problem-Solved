#include<bits/stdc++.h>
using namespace std;
int a[200001];
int main() {
	int t;
	cin>>t;
	while(t--) {
		int n,k;
		cin>>n>>k;
		for(int i=1; i<=n; ++i)
			cin>>a[i];
		sort(a+1,a+n+1);
		for(int i=1; i<=n; ++i)
			a[i]+=(a[n]+k-1-a[i])/(k*2)*k*2;
		sort(a+1,a+n+1);
		if(a[n]-a[1]+1>k) cout<<-1<<endl;
		else cout<<a[n]<<endl;
	}
	return 0;
}
