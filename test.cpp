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
	vector<int> a(n+1);
	auto dfs = [&](auto&& self,int u,int f)->void
	{
		for(int v:e[u])
		{
			if(v == f) continue;
			self(self,v,u);
			a[u] += a[v]+abs(u-v);
		}
	};
	dfs(dfs,1,0);
	
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}