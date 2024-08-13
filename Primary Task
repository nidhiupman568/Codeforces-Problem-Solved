#include<iostream>
using namespace std;

bool v(const string&s){return s.size()>2&&s[0]=='1'&&s[1]=='0'&&s[2]!='0'&&(s[2]!='1'||s.size()>3);}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){string s;cin>>s;cout<<(v(s)?"YES\n":"NO\n");}
}
