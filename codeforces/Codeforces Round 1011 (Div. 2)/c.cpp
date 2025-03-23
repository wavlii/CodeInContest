// Problem: C. Serval and The FormulaC. Serval 和 The Formula
// Contest: Codeforces - Codeforces Round 1011 (Div. 2)Codeforces 第 1011 轮 （Div. 2）
// URL: https://codeforces.com/contest/2085/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 可恶的C还我青名梦

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	long long x,y;cin>>x>>y;
	if(x == y)
	{
		cout<<-1<<'\n';
		return ;
	}
	long long ans = (1LL<<50)-max(x,y);
	cout<<ans<<'\n';
	
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}