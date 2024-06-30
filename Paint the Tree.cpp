#include<bits/stdc++.h>
using namespace std;
int t,x,n,a,b,u,v,k,mx,dep[200001],fa[200001];
basic_string <int> G[200001];
void dfs(int x,int u){
	dep[x]=dep[u]+1,fa[x]=u,mx=max(mx,dep[x]);
	for(int y:G[x]) if(y!=u) dfs(y,x);
}
int main(){
	scanf("%d",&t),dep[0]=-1;
	while(t--){
		scanf("%d%d%d",&n,&a,&b);
		for(int i=1;i<=n;i++) G[i].clear();
		for(int i=1;i<n;i++) scanf("%d%d",&u,&v),G[u]+=v,G[v]+=u;
		x=a,dfs(b,0);
		while(dep[x]>(dep[a]+1)/2) x=fa[x];
		mx=0,k=dep[x],dfs(x,0);
		printf("%d\n",(n-1)*2+k-mx);
	}
	return 0;
}
