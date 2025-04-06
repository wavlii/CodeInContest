// Problem: C. You Soared Afar With Grace
// Contest: Codeforces - Teza Round 1 (Codeforces Round 1015, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/2084/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	vector<int> a(n+1),b(n+1),pa(n+1),pb(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
		pa[a[i]] = i;
	}
	for(int i = 1;i<=n;i++)
	{
		cin>>b[i];
		pb[b[i]] = i;
	}
	vector<pair<int,int>> ans;
	int sam = 0;
	for(int i = 1;i<=n;i++)
	{
		if(a[i]==b[i]) sam++;
	}
	if(n&1)
	{
		if(sam==0||sam>1)
		{
			cout<<-1<<'\n';
			return ;
		}
		int mid = n/2+1;
		for(int l = 1,r = n;l<mid;l++,r--)
		{
			if(a[l]==b[l])
			{
				ans.push_back({l,mid});
				swap(pa[a[l]],pa[a[mid]]);
				swap(pb[b[l]],pb[b[mid]]);
				swap(a[l],a[mid]);swap(b[l],b[mid]);
			}
			if(a[r]==b[r])
			{
				ans.push_back({mid,r});
				swap(pa[a[r]],pa[a[mid]]);
				swap(pb[b[r]],pb[b[mid]]);
				swap(a[r],a[mid]);swap(b[r],b[mid]);
			}
			if(a[l]==b[r]&&a[r]==b[l])
			{
				continue;
			}
			int p = pa[b[l]];
			if(a[l]!=b[p]||b[l]!=a[p])
			{
				cout<<-1<<'\n';
				return ;
			}
			ans.push_back({p,r});
			swap(pa[a[r]],pa[a[p]]);
			swap(pb[b[r]],pb[b[p]]);
			swap(a[r],a[p]);swap(b[r],b[p]);
		}
	}
	else
	{
		if(sam>0)
		{
			cout<<-1<<'\n';
			return ;
		}
		int mid = n/2;
		for(int l = 1,r = n;l<=mid;l++,r--)
		{
			if(a[l]==b[r]&&a[r]==b[l])
			{
				continue;
			}
			int p = pa[b[l]];
			if(a[l]!=b[p]||b[l]!=a[p])
			{
				cout<<-1<<'\n';
				return ;
			}
			ans.push_back({p,r});
			swap(pa[a[r]],pa[a[p]]);
			swap(pb[b[r]],pb[b[p]]);
			swap(a[r],a[p]);swap(b[r],b[p]);
		}
	}
	cout<<ans.size()<<'\n';
	for(auto [a,b]:ans)
	{
		cout<<a<<' '<<b<<'\n';
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