#include<bits/stdc++.h>
using namespace std; int t,n; int main() { cin>>t; while(t--) { int n; cin >> n; int a[n],b[n],ip[n]; for(int i=1;i<=n;i++) cin>>a[i],b[i]=0,ip[a[i]]=i; int d=n,dd=n/2; for(int i=1;i<=n;i++){ if(ip[i]%2==ip[n]%2) b[ip[i]]=d--; else b[ip[i]]=dd--; } for(int i=1;i<=n;i++) cout<<b[i]<<" "; cout<<"\n"; } }
