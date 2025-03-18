// Problem: C. Two Colors
// Contest: Codeforces - Educational Codeforces Round 176 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2075/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,m;cin>>n>>m;
	vector<int> a(m+1);
	long long tnn = 0;
	for(int i = 1;i<=m;i++)
	{
		cin>>a[i];
		// a[i] = min(n-1,a[i]);
		if(a[i] == n) tnn++;
	}
	sort(a.begin()+1,a.end());
	vector<long long> las(m+2);las[m] = a[m];
	for(int i = m-1;i>=1;i--) las[i] = las[i+1]+a[i];
	long long ans = 0;
	for(int i = 1;i<=m;i++)
	{
		int tn = (a.end()-lower_bound(a.begin()+1,a.end(),n-a[i]));
		if(tn>m-i) tn = m-i;
		ans += 2LL*(las[m-tn+1]+1LL*tn*(a[i]-n+1));
	}
	ans -= 2LL*tnn*(m-1);
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