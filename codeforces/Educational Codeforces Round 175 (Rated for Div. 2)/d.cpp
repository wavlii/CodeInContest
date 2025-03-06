// Problem: D. Tree Jumps  D. 树木跳跃
// Contest: Codeforces - Educational Codeforces Round 175 (Rated for Div. 2)Educational Codeforces Round 175 （分级为 2 组）
// URL: https://mirror.codeforces.com/contest/2070/problem/D
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// math
#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
struct node
{
	int i,w;
};
const long long mod = 998244353;
void solve()
{
	int n;cin>>n;
	vector<node> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		a[i].i = i;	
	}
	a[1].w = 1;
	unordered_map<int,int> t;
	long long ans = 1;long long pre = 1;int mm = -1;
	for(int i = 2;i<=n;i++)
	{
		int x;cin>>x;
		a[i].w = a[x].w+1;
		t[a[i].w]++;
		mm = max(mm,a[i].w);
	}
	for(int i = 2;i<=mm;i++)
	{
		ans += pre*t[i];
		pre *= (t[i]-1);
		pre%=mod,ans%=mod;
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