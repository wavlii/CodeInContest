// Problem: 收集金币
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/102742/D
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
	int n,m;cin>>n>>m;
	vector<vector<int>> gold(n+m+3,vector<int> (m+1,0));
	vector<vector<int>> vis(n+m+3,vector<int> (m+1,0));
	vector<vector<int>> tlim(n+m+3,vector<int> (m+1,1e9));
	for(int i = 1;i<=n;i++)
	{
		for(int j = 1;j<=m;j++)
		{
			cin>>gold[i+(j-1)][j];
		}
	}
	int t;cin>>t;
	for(int i = 1;i<=t;i++)
	{
		int x,y,v;cin>>x>>y>>v;
		tlim[x+y-1][y] = v;
	}
	vector<vector<int>> sum = gold;
	//调试过程....
		// for(int i = 1;i<=n+m+1;i++)
	// {
		// for(int j = 1;j<=m;j++)
		// {
			// cout<<gold[i][j]<<' ';
		// }
		// cout<<'\n';
	// }
	// cout<<"-------------\n";
		// for(int i = 1;i<=n+m+1;i++)
	// {
		// for(int j = 1;j<=m;j++)
		// {
			// cout<<tlim[i][j]<<' ';
		// }
		// cout<<'\n';
	// }
// 	
	int ans = 0;
	vis[1][1] = 1;
	for(int i = 1;i<=n+m+2;i++)
	{
		for(int j = 1;j<=m;j++)
		{
			if(vis[i][j]&&i<=tlim[i][j])
			{
				ans = max(ans,sum[i][j]);
				if(gold[i+1][j]!=0) sum[i+1][j] = max(sum[i+1][j],sum[i][j]+gold[i+1][j]),vis[i+1][j] = 1;
				if(gold[i+1][j+1]!=0) sum[i+1][j+1] = max(sum[i+1][j+1],sum[i][j]+gold[i+1][j+1]),vis[i+1][j+1] = 1;
				// cout<<ans<<'\n';
			}
		}
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