// Problem: 收集金币
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/102742/D
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


// 深搜TLE版本
#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,m;cin>>n>>m;
	vector<vector<int>> gold(n+1,vector<int> (m+1));
	vector<vector<int>> tlim(n+1,vector<int> (m+1,1e9));
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=m;j++)
		{
			cin>>gold[i][j];
		}
	}
	int t;cin>>t;
	for(int i = 1;i<=t;i++)
	{
		int x,y,v;cin>>x>>y>>v;
		tlim[x][y] = v;
	}
	int ans = 0;
	function<void(int ,int ,int)> dfs = [&](int tx,int ty,int sum)
	{
		if(tx>n||ty>m||tx+ty-1>tlim[tx][ty]) return ;
		sum += gold[tx][ty];
		ans = max(ans,sum);
		dfs(tx,ty+1,sum);
		dfs(tx+1,ty,sum);
	};
	dfs(1,1,0);
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