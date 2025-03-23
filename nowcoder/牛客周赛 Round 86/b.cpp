// Problem: 小苯的区间删除
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/104637/B
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
	int n,k;cin>>n>>k;
	long long ans = 0;
	for(int i = 1,x;i<=n;i++)
	{
		cin>>x;
		if(x>0) ans += x;
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