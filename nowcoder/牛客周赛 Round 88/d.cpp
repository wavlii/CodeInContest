// Problem: 漫步
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/106318/D
// Memory Limit: 2048 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	long long x;cin>>x;
	if((x&(x+1))==0)
	{
		cout<<-1<<"\n";
		return ;
	}
	int len = __lg(x);
	long long z = 0;
	for(int i = 0;i<len;i++)
	{
		if((x&(1LL<<i)) == 0)	{z |= (1LL<<i);break;}
	}
	cout<<z<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}