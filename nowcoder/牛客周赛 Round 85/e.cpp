// Problem: 小紫的线段染色
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103948/E
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;

struct sem //区间
{
	int l,r,i;
	bool operator<(sem& a)
	{
		if(l!=a.l) return l<a.l;
		else return r<a.r;
	}
};
void solve()
{
	int n;cin>>n;
	vector<sem> a(n+1);
	vector<int> b;
	b.emplace_back(5);
	vector<pair<int,int>> x;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i].l>>a[i].r;
		a[i].i = i;
		x.emplace_back(a[i].l,1);
		x.emplace_back(a[i].r+1,-1);
	}
	sort(x.begin(),x.end());
	int sum = 0;
	for(auto ele:x)
	{
		sum += ele.second;
		if(sum>2)
		{
			cout<<-1<<'\n';
			return ;
		}
	}
	int mr = -1,id = 0;
    sort(a.begin()+1,a.end());
	vector<int> ans(n+1);
	for(int i = 1;i<=n;i++)
	{
		if(a[i].l<=mr)
		{
			ans[a[i].i] = ans[id]^1;
		}
		if(a[i].r>mr)
		{
			mr = a[i].r;
			id = a[i].i;
		}
	}
	int nn = count(ans.begin(),ans.end(),1);
	if(nn)
	{
		cout<<nn<<'\n';
		for(int i = 1;i<=n;i++)
		{
			if(ans[i] == 1)
				cout<<i<<' ';
		}
	}
	else cout<<1<<'\n'<<1;
	cout<<'\n';
	
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}