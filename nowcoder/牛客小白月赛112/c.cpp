// Problem: 智乃放球
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103957/C
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
	long long n,m,k,q;cin>>n>>m>>k>>q;
	if(q>m*(k-1))
	{
		cout<<"No\n";
		return ;
	}
	n-=q;
	if(n%k == 0)
	{
		cout<<"Yes\n";
	}
	else
	{
		cout<<"No\n";
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