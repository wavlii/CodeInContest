#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
    int x,y;
    cin>>x>>y;
    if(x<y)cout<<y-x<<endl;
    else cout<<"0"<<endl;
}
signed main(){
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}