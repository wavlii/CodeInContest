// Problem: C. XOR and Triangle  C. XOR 和 Triangle
// Contest: Codeforces - Codeforces Round 1009 (Div. 3)Codeforces 第 1009 轮 （第 3 组）
// URL: https://mirror.codeforces.com/contest/2074/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 哎搞笑了，一开始交的代码重测的时候挂了，直接掉6000名，不然我说不定这场上青了
// QAQ
// 下面是看的jls的代码

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int x;cin>>x;
	if((x&(x-1))==0||(x&(x+1)) == 0)
	{
		cout<<-1<<'\n';
		return ;
	}
	int a = __lg(x);
	int b = __builtin_ctz(~x);
	cout<<(x^(1LL<<a)^(1LL<<b))<<'\n';	
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}