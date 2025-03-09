// Problem: 判断两个程序的中断优先级
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103785/C
// Memory Limit: 64 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int a,a2;int b,b2;
	cin>>a>>a2>>b>>b2;
	if(a!=b)
	{
		if(a<b) cout<<'A';
		else cout<<'B';
	}
	else
	{
		if(a2<b2) cout<<'A';
		else cout<<'B';
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