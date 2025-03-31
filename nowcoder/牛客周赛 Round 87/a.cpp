// Problem: 小苯的V图
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/105623/A
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int a,b,c;cin>>a>>b>>c;
	if(a>b&&c>b) cout<<"YES\n";
	else cout<<"NO\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}