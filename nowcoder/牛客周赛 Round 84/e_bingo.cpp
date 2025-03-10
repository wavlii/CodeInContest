// Problem: 小红的陡峭值（四）
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103152/E
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
	vector<int> e[n+1];
	for(int i = 1;i<n;i++)
	{
		int u,v;cin>>u>>v;
		e[u].emplace_back(v);
		e[v].emplace_back(u);
	}
	vector<long long> a(n+1);
	function<void(int u,int f)> dfs = [&](int u,int f)
	{
		for(int& v:e[u])	
		{
			if(v == f) continue;
			dfs(v,u);
			a[u] += a[v]+abs(u-v);
		}
	};
	dfs(1,0);
	// cout<<a[1]<<'\n';
	long long ans = 1e18;
	function<void(int,int)> dfs2 = [&](int u,int f)
	{
		for(int v:e[u])
		{
			if(v == f) continue;
			// cout<<v<<' '<<a[v]<<' '<<(u-v)<<'\n';
			ans = min(abs(a[1]-2*a[v]-abs(u-v)),ans);
			dfs2(v,u);
		}
	};
	dfs2(1,0);
	cout<<ans<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}