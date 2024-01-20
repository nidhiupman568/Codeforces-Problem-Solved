#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e5+2;
int T,n,m,a[N],b[N],ans[N],bns[N],x,y;
signed main(){
	cin>>T;while(T--){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		b[1]=2,b[n]=n-1;
		for(int i=2;i<n;i++)if(a[i]-a[i-1]<a[i+1]-a[i])b[i]=i-1;else b[i]=i+1;
		ans[1]=bns[n]=0;
		for(int i=2;i<=n;i++)ans[i]=ans[i-1]+(b[i-1]==i?1:a[i]-a[i-1]);
		for(int i=n-1;i;i--)bns[i]=bns[i+1]+(b[i+1]==i?1:a[i+1]-a[i]);
		cin>>m;
		while(m--){
			cin>>x>>y;
			if(x<y)cout<<ans[y]-ans[x]<<'\n';
			else cout<<bns[y]-bns[x]<<'\n';
		}
	}
}
