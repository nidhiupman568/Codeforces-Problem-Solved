#include<bits/stdc++.h>
using namespace std ;
const int N=2e5+6;
int a[N],b[N];
int main()
{
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		for(int i=1;i<=n;i++)cin>>a[i];
		for(int i=1;i<=n;i++)cin>>b[i];
		int A=0,B=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]>b[i])A+=a[i];
			if(a[i]<b[i])B+=b[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]==b[i])
			{
				if(a[i]*(A-B)>0)B+=b[i];
				else A+=a[i];
			}
		}
		cout<<min(A,B)<<"\n";
	}
	return 0;
}
