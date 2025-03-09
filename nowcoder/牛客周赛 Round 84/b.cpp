// Problem: 小红的陡峭值（二）
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103152/B
// Memory Limit: 2048 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	int ty = 0;
	vector<int> a(n+1);
	map<int,int> tt;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
		if(tt[a[i]] == 0) ty++,tt[a[i]] = 1;
	}
	sort(a.begin()+1,a.end());
	long long ans = 0;
	for(int i = 2;i<=n;i++)
	{
		ans += (a[i]-a[i-1]);	
	}
	if(ty == 1) cout<<1<<' '<<ans<<'\n';
	else cout<<2<<' '<<ans<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}