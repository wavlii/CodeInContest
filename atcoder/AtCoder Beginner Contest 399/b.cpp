// Problem: B - Ranking with Ties
// Contest: AtCoder - AtCoder Beginner Contest 399
// URL: https://atcoder.jp/contests/abc399/tasks/abc399_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
struct node{
	int w,po;
};
void solve()
{
	int n;cin>>n;
	vector<node> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i].w;a[i].po = i;
	}
	sort(a.begin()+1,a.end(),[&](node& ta,node& tb){return ta.w>tb.w;});
	a[0].w = a[1].w;
	int r = 1;
	vector<int> ans(n+1);
	for(int i = 1;i<=n;i++)
	{
		if(a[i].w!=a[i-1].w) r = i;
		ans[a[i].po] = r;
	}
	for(int i = 1;i<=n;i++)
	{
		cout<<ans[i]<<'\n';
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