#include <bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,m,f[N],g[N];
vector<int> e[N];
void dfs1(int x,int fa){
	for(int y:e[x]) if(y!=fa) dfs1(y,x),f[x]+=!f[y];
}
void dfs2(int x,int fa,int o){
	g[x]=f[x]+!o;
	for(int y:e[x]) if(y!=fa) dfs2(y,x,g[x]-!f[y]);
}
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>m;
	for(int i=1,u,v;i<n;i++) cin>>u>>v,e[u].push_back(v),e[v].push_back(u);
	dfs1(1,0);dfs2(1,0,1);
	for(int x;m--;) cin>>x,cout<<(g[x]?"Ron\n":"Hermione\n");
	return 0;
}
