// Problem: E. Do You Love Your Hero and His Two-Hit Multi-Target Attacks?E.你喜欢你的英雄和他的两击多目标攻击吗？
// Contest: Codeforces - Codeforces Round 1006 (Div. 3)Codeforces 第 1006 轮 （第 3 组）
// URL: https://mirror.codeforces.com/contest/2072/problem/E
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int k;cin>>k;
	int p = 1,xx = 1;
	vector<int> a;
	long long ans = 0;
	while(k)
	{
		int l = -1,r = 1e7;
		while(l+1<r)
		{
			int mid = (l+r)>>1;
			if(1LL*mid*(mid-1)/2>k) r = mid;
			else l = mid;
		}
		k -= l*(l-1)/2;
		a.emplace_back(l);
		ans += l;
	}
	cout<<ans<<'\n';
	for(int ele:a)
	{
		for(int i = 1;i<=ele;i++)
		{
			cout<<p<<' '<<xx<<'\n';
			xx++;
		}
		p++;
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