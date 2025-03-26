// Problem: B. Team Training
// Contest: Codeforces - Codeforces Round 1013 (Div. 3)
// URL: https://codeforces.com/contest/2091/problem/B
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
	int n,x;cin>>n>>x;
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a.begin()+1,a.end(),greater());
	int p = 1,ans = 0;	
	while(p<=n)
	{
		int l = 1;
		while(p<=n&&1LL*a[p]*l<x) p++,l++;
		if(p>n) break;
		ans++,p++;
	}
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