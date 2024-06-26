#include<bits/stdc++.h>
#define N 400010
#define M 6000010
using namespace std;
int n,m,y,to[N],w[N],h[N],ne[N],cnt,f[N],dep[N],ct;
int son[M][2],sz[M];
string str;

inline void add(int u,int v,int wf){
	cnt++;ne[cnt]=h[u];h[u]=cnt;w[cnt]=wf;to[cnt]=v;
	cnt++;ne[cnt]=h[v];h[v]=cnt;w[cnt]=wf;to[cnt]=u;
}

inline void ins(int p,int g,int fz){
	sz[p]+=fz;
	for(int i=30;i>=0;i--){
		int c=((g>>i)&1);
		if(!son[p][c]) son[p][c]=++ct;
		p=son[p][c];
		sz[p]+=fz;
	}
}

void dfs(int x,int ff){
	ins(dep[x]+1,f[x],1);
	for(int i=h[x];i;i=ne[i]){
		if(to[i]!=ff) dep[to[i]]=dep[x]^1,f[to[i]]=f[x]^w[i],dfs(to[i],x);
	}
}

inline int ask(int p,int g){
	int rt=0;
	for(int i=30;i>=0;i--){
		int c=((g>>i)&1);
		if(sz[son[p][c^1]]) rt|=(1<<i),p=son[p][c^1];
		else p=son[p][c];
	}
	return rt;
}

void mian(){
	cin>>n>>m;cnt=0;ct=2;y=0;
	for(int i=1;i<=n;i++) h[i]=f[i]=ne[i*2-1]=ne[i*2]=dep[i]=0;
	for(int i=1;i<n;i++){
		int u,v,wf;
		cin>>u>>v>>wf;
		add(u,v,wf);
	}
	dfs(1,0);
	for(int i=1;i<=m;i++){
		cin>>str;
		int v,u;
		if(str=="^") cin>>v,y^=v;
		else{
			cin>>u>>v;
			ins(dep[u]+1,f[u],-1);
			cout<<max(ask(dep[u]+1,f[u]^v),ask(1+(dep[u]^1),f[u]^v^y))<<' ';
			ins(dep[u]+1,f[u],1);
		}
	}
	for(int i=1;i<=ct;i++) son[i][0]=son[i][1]=sz[i]=0;
	cout<<endl;
}

int main(){
	int t;
	cin>>t;
	while(t--) mian();
	return 0;
}
