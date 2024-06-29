#include<iostream>
#include<vector>
using namespace std;
const int N=1000010;
long long t,m,x;
int main(){
	cin>>t;
	while(t--){
		cin>>m>>x;
		vector<long long> dp(100010,1e18);
		dp[0]=0;
		int ans=0;
		for(int i=0,c,h,sum=0;i<m;i++){
			cin>>c>>h;
			sum+=h;
			for(int j=sum;j>=h;j--){
				if(dp[j-h]+c<=x*i) dp[j]=min(dp[j],dp[j-h]+c);
				if(dp[j]<1e18) ans=max(ans,j);
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}
