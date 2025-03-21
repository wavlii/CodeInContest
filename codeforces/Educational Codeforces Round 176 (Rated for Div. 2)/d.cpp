// Problem: D. Equalization  D. 均衡
// Contest: Codeforces - Educational Codeforces Round 176 (Rated for Div. 2)Educational Codeforces Round 176 （分级为 Div. 2）
// URL: https://codeforces.com/contest/2075/problem/D
// Memory Limit: 256 MB
// Time Limit: 3500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<62)-1;
const int inf = ((unsigned int)1<<30)-1;
vector dp(64,vector (64,vector (35,linf)));
vector g(64,vector (64,linf));
void init()
{
	for(int i = 0;i<dp.size();i++)
	{
		for(int j = 0;j<dp[0].size();j++)
		{
			for(int k = 0;k<dp[0][0].size();k++)
			{
				if(i+j==0) dp[i][j][k] = 0;
				else if(k)
				{
					dp[i][j][k] = min(dp[i][j][k],dp[i][j][k-1]);
					if(i>=k) dp[i][j][k] = min(dp[i][j][k],dp[i-k][j][k-1]+(1LL<<k));
					if(j>=k) dp[i][j][k] = min(dp[i][j][k],dp[i][j-k][k-1]+(1LL<<k));	
				}
			}
		}
	}
	for(int i = 0;i<63;i++)
	{
		for(int j = 0;j<63;j++)
		{
			for(int k = 0;k<33;k++)
			{
				g[i][j] = min(g[i][j],dp[i][j][k]);
			}
		}
	}
}
void solve()
{
	long long x,y;cin>>x>>y;
	if(x==y) 
	{
		cout<<0<<'\n';
		return ;
	}
	int a = __lg(x),b = __lg(y),w = 0;
    int ta = a+1,tb = b+1;
	while(a>=0&&b>=0&&(((x&(1LL<<a))>>a)==((y&(1LL<<b))>>b))) a--,b--,w++;
	a++,b++;
	long long ans = g[a][b];
	// cout<<ans<<'\n';
    int tw = w;
    cout<<"ta"<<ta<<" tb "<<tb<<'\n';
    cout<<"a "<<a<<" b "<<b<<" w "<<w<<'\n';
	while(tw--) ans = min(ans,g[a+tw][b+tw]);
	for(int i = ta;i<63;i++)
    {
        for(int j = tb;j<63;j++)
        {
        	// cout<<g[i][j]<<'\n';
            ans = min(ans,g[i][j]);
        }
    }
    cout<<ans<<'\n';
	// for(int i = 0;i<=5;i++)
	// {
	// 	for(int j = 0;j<=5;j++)
	// 	{
	// 		cout<<"g["<<i<<"]["<<j<<"]="<<setw(20)<<left<<g[i][j]<<' ';
	// 	}
	// 	cout<<'\n';
	// }
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    init();
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}