#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mod=1e9+7;
int qpow(int a,int b,int p){
	int num=1;
	while(b){
		if(b&1){
            num*=a;num%=p;
        }
		a*=a;a%=p;
		b>>=1;
	}
	return num;
}
void solve(){
    int k,p;
    cin>>k>>p;
    vector<int>vis(19);
    string s;
    cin>>s;
    s=" "+s;
    vector<int>a(19);
    for(int i=1;i<=18;i++){
        cin>>a[i];
    }
    for(int i=1;i<=18;i++){
        if(s[i]=='1')k+=5;
        if(k>=69){
            k-=69;
            vis[i]=1;
        }
    }
    int m=100;
    for(int i=1;i<=18;i++){
        if(vis[i]){
            p*=100+a[i];
            p%=mod;
            m*=100;
            m%=mod;
        }
    }
    int ans=p*qpow(m,mod-2,mod);
    ans%=mod;
    cout<<ans<<endl;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}