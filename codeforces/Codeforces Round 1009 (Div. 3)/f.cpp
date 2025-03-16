// Problem: F. Counting Necessary Nodes
// Contest: Codeforces - Codeforces Round 1009 (Div. 3)
// URL: https://mirror.codeforces.com/contest/2074/problem/F
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
	int l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;
	long long ans = 0;
	while(1)
	{
		if(l1 == r1||l2 == r2) break;
		if(l1&1)
		{
			ans += (r2-l2);
			l1+=1;
		}
		if(l1 == r1||l2 == r2) break;
		if(l2&1)
		{
			ans += (r1-l1);
			l2+=1;
		}
		if(l1 == r1||l2 == r2) break;
		if(r1&1)
		{
			ans += (r2-l2);
			r1-=1;
		}
		if(l1 == r1||l2 == r2) break;
		if(r2&1)
		{
			ans += (r1-l1);
			r2-=1;
		}
		if(l1 == r1||l2 == r2) break;
		l1/=2,l2/=2,r1/=2,r2/=2;
	}
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