// Problem: 智乃的“凑数”题（Easy Version）
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103957/E
// Memory Limit: 1024 MB
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
	vector dp(101,vector<int> (101));
	vector pre = dp;
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	dp[0][0] = 1;
	for(int i = 1;i<=n;i++)
	{
		for(int x = 100;x>=0;x--)
		{
			for(int y = 100;y>=0;y--)
			{
				if(dp[x][y]) continue;
				if(x>=a[i]&&dp[x-a[i]][y]) dp[x][y] = 1,pre[x][y] = a[i];
				else if(y>=a[i]&&dp[x][y-a[i]]) dp[x][y] = 1,pre[x][y] = -a[i];
			}
		}
	}
	while(m--)
	{
		bool ok = false;
		int x;cin>>x;
		vector<int> px,py;
		for(int i = 1;i<=sqrt(x);i++)
		{
			if(x%i!=0) continue;
			if(!dp[i][x/i]) continue;
			ok = true;
			int tx = i,ty = x/i;
			while(tx||ty)
			{
				if(pre[tx][ty]>0) px.emplace_back(pre[tx][ty]),tx -= pre[tx][ty];
				else py.emplace_back(-pre[tx][ty]),ty += pre[tx][ty];
				// cout<<tx<<' '<<ty<<'\n';
			}
			break;
		}
		if(ok)
		{
			cout<<"Yes\n";
			cout<<px.size()<<' '<<py.size()<<"\n";
			for(int ele:px) cout<<ele<<" \n"[ele==px.back()];
			for(int ele:py) cout<<ele<<" \n"[ele==py.back()];
		}
		else
		{
			cout<<"No\n";
		}
	}
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}