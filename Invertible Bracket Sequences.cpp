#include <bits/stdc++.h>
using namespace std;long long T,A,t,a[1<<18];main(){cin>>t;while(t--){string s;cin>>s;T=A=0;memset(a,0,sizeof(a));for(int u:s)T+=u=='('?1:-1,A+=a[T]++,a[(T-1)/2]=0;cout<<A<<"\n";}}
