// Problem: A. Kamilka and the SheepA. 卡米尔卡和羊
// Contest: Codeforces - Codeforces Round 1014 (Div. 2)Codeforces 第 1014 轮 （Div. 2）
// URL: https://codeforces.com/contest/2092/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int  n;cin>>n;
	int mn = 1e9,mx = -1;
	for(int i = 1;i<=n;i++)
	{
		int x;cin>>x;
		mn = min(mn,x);
		mx = max(mx,x);
	}
	cout<<mx-mn<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}