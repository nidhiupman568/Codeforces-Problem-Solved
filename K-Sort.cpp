#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{int n;
cin>>n;
int a[n];
int mx=0,x=0;
long long ans=0;
for(int i=0;i<n;i++)
{cin>>a[i];
ans+=max(0,mx-a[i]);
x=max(x,mx-a[i]);
mx=max(mx,a[i]);}
cout<<ans+x<<endl;}}
