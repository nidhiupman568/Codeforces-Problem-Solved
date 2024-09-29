#include<iostream>
#include<algorithm>
#include <string>
#include<iomanip>
#include <map>
#include<vector>
#include <cmath>
#include <fstream>
#include<set>
#include<stack>
#include<queue>
#include <list>
#include<cstring>
#include<unordered_set>
#include<unordered_map>
#include<utility>
#include<memory>


typedef long long ll;
#define MP make_pair
#define FR(i,b) for(int i=0;i<b;i++)
#define pb push_back
#define int long long
#define fors(n) for(int i=0;i<n;i++)
const ll m1=1E9+7;
#define INT_SIZE 30
#define pi 3.14159265358979323846264338327950
#define double long double

using namespace std;
const int m2=998244353;


signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int s=0;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                if(s>0){
                    s--;
                    cnt++;
                }
            }
            else if(a[i]>=k){
                s+=a[i];
            }
        }
        cout<<cnt<<'\n';
    }
}
