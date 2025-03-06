// Problem: A. New World, New Me, New Array一个。新世界、新我、新阵列
// Contest: Codeforces - Codeforces Round 1006 (Div. 3)Codeforces 第 1006 轮 （第 3 组）
// URL: https://mirror.codeforces.com/contest/2072/problem/0
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
	int n,k,p;
	cin>>n>>k>>p;
	if(k<0) k = -k;
	if(n*p<k)
	{
		cout<<-1<<'\n';
	}
	else
	{
		if(k%p == 0)
		{
			cout<<k/p<<"\n";
		}
		else
		{
			cout<<k/p+1<<"\n";
		}
	}
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}