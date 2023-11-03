#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m;
ll W[800100];
int tg[801000],T[800100],V[801000],ls[801000],rs[800100],d[801000];
void ad(int x,ll z){W[x]+=z,tg[x]+=z;}
void pd(int x){
	if(ls[x])ad(ls[x],tg[x]);
	if(rs[x])ad(rs[x],tg[x]);
	tg[x]=0;
}
int merge(int x,int y){
	if(!x||!y)return x+y;
	if(W[x]>W[y])swap(x,y);
	pd(x),rs[x]=merge(rs[x],y);
	if(d[ls[x]]<d[rs[x]])swap(ls[x],rs[x]);
	d[x]=d[rs[x]]+1;return x;
}
void pop(int &x){pd(x),x=merge(ls[x],rs[x]);}
int fa[800100];int F(int x){if(x==fa[x])return x;return fa[x]=F(fa[x]);}
int top(int x){
	while(T[x]&&F(V[T[x]])==x)pop(T[x]);
	if(!T[x])return 0;
	V[T[x]]=F(V[T[x]]);
	return T[x];
}
int sz[800100];
void mer(int u,int v){
	T[u]=merge(T[u],T[v]);
	fa[v]=u,sz[u]+=sz[v];
}
const ll I=1e18,I2=1e13;
int pr[800100],is[801000],en;
vector<int>G[801000];
ll og[800100],oi[800100],all;int bel[801000],fo[800100],f[801000][20],dfn[801000];
void dfs(int x){
	bel[dfn[x]=++dfn[0]]=x;
	for(int v:G[x]){
		all+=og[v];
		oi[v]=oi[x]+og[v],d[v]=d[x]+1,f[v][0]=x;
		for(int i=1;i<20;i++)f[v][i]=f[f[v][i-1]][i-1];
		dfs(v);
	}
}
int lca(int u,int v){
	if(d[u]<d[v])swap(u,v);int a=d[u]-d[v];
	for(int i=19;i>=0;i--)if((a>>i)&1)u=f[u][i];
	if(u==v)return u;
	for(int i=19;i>=0;i--)if(f[u][i]!=f[v][i])u=f[u][i],v=f[v][i];
	return f[u][0];
}
set<int>S;
char E[2];int q;
ll sum;
int main(){
	scanf("%d%d%d",&n,&m,&q);
	en=n;
	for(int i=1,u;i<=m;i++)scanf("%d%d%lld",&u,&V[i],&W[i]),T[u]=merge(T[u],i);
	for(int i=1;i<=n*2+2;i++)fa[i]=i,sz[i]=(i<=n);
	for(int i=1;i<=n;i++){
		int j=i,e;
		while(!is[j]){
			while(!is[j]){
				e=top(j),is[j]=i;
				if(!e){j=0;break;}
				j=V[e];
			}
			if(!j||is[j]!=i)break;
			en++;
			while(~is[j])
				e=top(j),is[j]=-1,fo[j]=en,og[j]=min(W[e],I2),j=pr[j]=V[e],ad(e,-W[e]);
			while(is[j]!=i)is[j]=i,mer(en,j),j=pr[j];
			j=en;
		}
	}
	for(int i=1;i<=en;i++){
		if(F(i)==i){
			int e=top(i);
			if(e)og[i]=W[e];
			else og[i]=I2;
		}
		if(!fo[i])fo[i]=en+1;
		G[fo[i]].push_back(i);
	}
	en++,d[en]=0,dfs(en);
	for(int i=1,u;i<=q;i++){
		scanf("%s%d",E,&u);
		int pr=-1,nx=-1;
		auto it=S.upper_bound(dfn[u]);
		if(it!=S.end())nx=bel[*it];
		it=S.lower_bound(dfn[u]);
		if(it!=S.begin())pr=bel[*(--it)];
		if(E[0]=='+'){
			sum+=oi[u];
			S.insert(dfn[u]);
			if(pr!=-1&&nx!=-1)sum+=oi[lca(pr,nx)];
			if(pr!=-1)sum-=oi[lca(pr,u)];
			if(nx!=-1)sum-=oi[lca(u,nx)];
		}
		else{
			sum-=oi[u];
			S.erase(dfn[u]);
			if(pr!=-1&&nx!=-1)sum-=oi[lca(pr,nx)];
			if(pr!=-1)sum+=oi[lca(pr,u)];
			if(nx!=-1)sum+=oi[lca(u,nx)];
		}
		if(all-sum>=I2)puts("-1");
		else printf("%lld\n",all-sum);
	}
	return 0;
}
