// Problem: mex
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/105825/D
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
	int n;cin>>n;
	vector<long long> a(n+1) ;
	bool ok = true;
	map<int,int> t;
	int size = 0;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
		if(t[a[i]]==0) size++,t[a[i]] = 1;
	}
	if(size == 1)
	{
		cout<<0<<'\n';
		return ;
	}
	sort(a.begin()+1,a.end());
	if(a[1]!=0) ok = false;
	long long ans = 1;
	for(int i = 2;i<=n;i++)
	{
		if(a[i-1]+1==a[i]||a[i-1]==a[i]) continue;
		else ans+=a[i]-a[i-1]-1;
	}
	if(ok) cout<<ans<<'\n';
	else cout<<-1<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}