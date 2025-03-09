// Problem: KNN算法
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103785/H
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 赛时状态不好，代码写的很烂

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
struct node
{
	int x,y,type;
};
struct node2
{
	long long s;
	int type,i;
};
struct cmp
{
	bool operator()(const node2& a,const node2& b)const
	{
		if(a.s != b.s) return a.s<b.s;
		else return a.i<b.i;
	}
};

void solve()
{
	int n,q;cin>>n>>q;
	vector<node> a(n+1);
	vector<int>  ans(n+1);
	map<int,int> tt;
	for(int i = 1;i<=n;i++) 
	{
		cin>>a[i].x>>a[i].y>>a[i].type;
	}
	double x,y;cin>>x>>y;
	set<node2,cmp> se;
	for(int i = 1;i<=n;i++)
	{
		node2 nnt;nnt.s = 1LL*(a[i].x-x)*(a[i].x-x)+(a[i].y-y)*(a[i].y-y);
		nnt.type = a[i].type;
		nnt.i = i;
		se.insert(nnt);
	}
	int k = 1;int m = 0,mt = -1;
	for(auto ele:se)
	{
		tt[ele.type]++;
		if(tt[ele.type]==m&&ele.type<mt) mt = ele.type;
		if(tt[ele.type]>m) m = tt[ele.type],mt = ele.type;
		ans[k++] = mt;
	}
	while(q--)
	{
		int kk;cin>>kk;
		cout<<ans[kk]<<'\n';
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