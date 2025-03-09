// Problem: 小红的陡峭值（五）（easy）
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103152/F
// Memory Limit: 2048 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
const int mod = 1e9+7;
int qpow(long long a,long long n)
{
	long long ans = 1;
	while(n)
	{
		if(n&1) ans *= a,ans %= mod;
		a *= a,a%=mod;
		n>>=1;
	}
	return ans;
}
void solve()
{
	long long n;cin>>n;
	vector<long long> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin()+1,a.end());
	vector<long long> b(n+1);
	for(int i = 1;i<=n;i++)
	{
		b[i] = b[i-1]+a[i];
	}
	long long ans = 0;
	long long t = 1;
	for(int i = 2;i<=n-1;i++)
	{
		t *= i;t%=mod;
	}
	for(int i = 1;i<=n;i++)
	{
		ans += t*((b[n]-b[i])-a[i]*(n-i));
		ans += t*(a[i]*(i-1)-(b[i-1]-b[0]));
		ans %= mod;
	}
	cout<<ans%mod*qpow(t*n%mod,mod-2)%mod<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}