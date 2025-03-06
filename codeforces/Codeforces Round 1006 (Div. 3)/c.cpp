// Problem: C. Creating Keys for StORages Has Become My Main Skillc. 为 StORages 创建 Key 已成为我的主要技能
// Contest: Codeforces - Codeforces Round 1006 (Div. 3)Codeforces 第 1006 轮 （第 3 组）
// URL: https://mirror.codeforces.com/contest/2072/problem/C
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
	long long n,x;cin>>n>>x;
	long long t = x;
	long long mme = 1;
	while(t&1) t>>=1,mme *= 2;
	if(mme>n-1)
	{
		long long aa = 0;
		for(int i = 0;i<n-1;i++)
		{
			cout<<i<<' ';
			aa |= i;
		}
		if((aa|(n-1)) == x) cout<<n-1;
		else cout<<x;
	}
	else
	{
		for(int i = 0;i<n-1;i++)
		{
			if(i<mme) cout<<i<<' ';
			else cout<<mme-1<<' ';
		}
		cout<<x;
	}
	
	
	cout<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}