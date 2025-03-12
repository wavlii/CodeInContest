// Problem: B. The Third Side  B.第三方
// Contest: Codeforces - Codeforces Round 1009 (Div. 3)Codeforces 第 1009 轮 （第 3 组）
// URL: https://mirror.codeforces.com/contest/2074/problem/B
// Memory Limit: 256 MB
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
	long long ans = 0;
	for(int i = 1;i<=n;i++)
	{
		int x;cin>>x;
		ans += x;
	}
	cout<<ans-n+1<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}