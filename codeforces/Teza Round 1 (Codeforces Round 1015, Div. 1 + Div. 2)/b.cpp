// Problem: B. MIN = GCD
// Contest: Codeforces - Teza Round 1 (Codeforces Round 1015, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/2084/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	vector<long long> a(n+1);
	long long mn = 1e18;
	for(int i = 1;i<=n;i++) 
	{
		cin>>a[i];
		mn = min(mn,a[i]);
	}
	for(auto i = a.begin();i<a.end();i++)
	{
		if(*i==mn)
		{
			a.erase(i);
			break;
		}
	}
	long long t = -1;
	for(int i = 1;i<n;i++)
	{
		if(a[i]%mn==0)
		{
			if(t==-1) t = a[i]/mn;
			else t = gcd(t,a[i]/mn);
		}
	}
	if(t == 1) cout<<"Yes\n";
	else cout<<"No\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}