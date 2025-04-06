// Problem: 秘藏
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/106318/E
// Memory Limit: 2048 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,k;cin>>n>>k;
	vector<int> a(n+1),b(n+1);
	vector dp(2,vector<long long> (n+1));
	
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++)
	{
		cin>>b[i];
	}
	dp[0][1] = a[1];dp[1][1] = 0;
	for(int i = 2;i<=n;i++)
	{
		dp[0][i] = dp[0][i-1]+a[i]; if(dp[1][i-1]>=k) dp[0][i] = max(dp[0][i],dp[1][i-1]-k+b[i]);
		if(dp[1][i-1]!=0)
		{
			dp[1][i] = dp[1][i-1]+b[i]; 
		}
			if(dp[0][i-1]>=k) dp[1][i] = max(dp[1][i],dp[0][i-1]-k+a[i]);
		
	}
	cout<<max(dp[1][n],dp[0][n])<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}