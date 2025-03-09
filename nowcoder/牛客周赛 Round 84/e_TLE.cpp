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

// 赛时没写出来，交的TLE版本

void solve()
{
	int n;cin>>n;
	vector<int> e[n+1];
	vector<int> vis(n+1);
	vector<pair<int,int>> data;
	for(int i = 1;i<n;i++)
	{
		int u,v;cin>>u>>v;
		e[u].emplace_back(v);
		e[v].emplace_back(u);
		data.push_back({u,v});
	}
	long long ans = 1e18;
	function<long long(int,int)> sum = [&](int x,int y)
	{
		long long res = 0;
		queue<int> que;
		que.push(x);
		while(!que.empty())
		{
			int u = que.front();
			vis[u] = 1;
			que.pop();
			for(int ele:e[u])
			{
				if(ele == y) continue;
				if(vis[ele]) continue;
				res += abs(ele-u);
				que.push(ele);
			}
		}
		return res;
	};
	for(auto &[a,b]:data)
	{
		fill(vis.begin(),vis.end(),0);
		// cout<<abs(sum(a,b)-sum(b,a))<<'\n';
		
		ans = min(ans,abs(sum(a,b)-sum(b,a)));
	}
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