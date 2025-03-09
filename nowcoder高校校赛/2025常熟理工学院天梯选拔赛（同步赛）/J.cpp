// Problem: Dyzzzd的字符串
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103785/J
// Memory Limit: 64 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// math

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
long long C(int a,int b)
{
	long long res = 1;
	long long t = 1;
	for(int i = 0;i<b;i++) res *= (a-i),res%=mod;
	for(int i = 1;i<=b;i++) t *= i,t%=mod;
	return res*qpow(t,mod-2)%mod;
}
void solve()
{
	int n,k;cin>>n>>k;
	string s;cin>>s;s = " "+s;
	vector<int> a(n+2),b(n+2);
	for(int i = 1;i<=n;i++)
	{
		a[i] = a[i-1];
		if(s[i] == 'a') a[i]++;
	}
	for(int i = n;i>=1;i--)
	{
		b[i] = b[i+1];
		if(s[i] == 'b') b[i]++;
	}
	if(k<=a[n])
	{
		cout<<C(a[n],k)<<'\n';
	}
	else
	{
		int p = n;
		k -= a[n];
		while(p>0)
		{
			while(p > 0 && s[p] == 'a')
			{
				p--;
			}
			int t = 0;
			while(p > 0 && s[p] == 'b')
			{
				p--,t++;
			}
			if(t>=k) 
            {
				cout<<C(t,k)<<'\n';
				return;
			}
			else k -= t;
		}
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