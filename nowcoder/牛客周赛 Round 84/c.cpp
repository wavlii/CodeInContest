// Problem: 小红的陡峭值（三）（easy)
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103152/C
// Memory Limit: 2048 MB
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
	string s;
	cin>>s;s = " "+s;
	vector<long long> a(n+1);
	for(int i = 2;i<=n;i++)
	{
		a[i] = a[i-1];
		a[i] += abs(s[i]-s[i-1]);
	}
	long long ans = 0;
	for(int i = k;i<=n;i++)
	{
		ans += a[i]-a[i-k+1];
	}
	cout<<ans<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}