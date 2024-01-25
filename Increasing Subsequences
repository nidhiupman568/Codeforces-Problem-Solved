#include <bits/stdc++.h>
using namespace std;
long long t,x,l;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>x;
		l=__lg(x);
		vector<int>v;
		for(int i=1;i<=l;i++) v.push_back(i);
		for(int i=l;i>=1;i--) if((x>>i-1)&1) v.push_back(i);
		cout<<v.size()<<"\n";
		for(auto i:v) cout<<i<<" ";
		cout<<"\n";
	}
}
