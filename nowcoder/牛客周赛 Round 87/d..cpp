// Problem: 小苯的最大和
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/105623/D
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
	int n;cin>>n;
	vector<long long> dp(n+1);
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++)
	{
		dp[i] = dp[i-1]+a[i];
		if(i>=2&&i<n) dp[i] = max(dp[i],dp[i-2]);
		if(i>=3&&i<n-1) dp[i] = max(dp[i],dp[i-3]);
	}
	cout<<dp[n]<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}