// Problem: 小紫的树上染色
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103948/F
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 结果二分  最大连通块越长，所需k越小
// if(check(mid)>k) l = mid;
// else r = mid;

// 代码写法与Nowcoder周赛 Round 84的E相似

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,k;cin>>n>>k;
	vector<int> e[n+1];
	for(int i = 1;i<n;i++)
	{
		int u,v;cin>>u>>v;
		e[u].emplace_back(v);
		e[v].emplace_back(u);
	}
	function<bool(int )> check = [&](int mid)
	{
		int need = 0;
		vector<int> cnt(n+1,1);
		vector<int> vis(n+1,0);
		function<void(int ,int)> dfs = [&](int u,int fa)
		{
			for(const int& v:e[u])
			{
				if(v == fa) continue;
				dfs(v,u);
				if(vis[u] == 0)
					cnt[u] += cnt[v];
			}
			if(cnt[u]>mid)
			{
				need++;
				cnt[u] = 0;
				vis[u] = 1;
			}
		};
		dfs(1,0);
		return need<=k;
	};
	int l = -1,r = n+1;
	while(l+1<r)
	{
		int mid = (l+r)>>1;
		if(check(mid)) r = mid;
		else l = mid;
	}
	cout<<r<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}