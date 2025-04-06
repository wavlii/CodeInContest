// Problem: C. Disappearing PermutationC. 消失排列
// Contest: Codeforces - Educational Codeforces Round 177 (Rated for Div. 2)Educational Codeforces Round 177 （分级为 Div. 2）
// URL: https://codeforces.com/contest/2086/problem/C
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
	vector<int> a(n+1),b(n+1),vis(n+1);
	
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i = 1;i<=n;i++)
	{
		cin>>b[i];
	}
	int ans = 0;
	for(int i = 1;i<=n;i++)
	{
		int t = b[i];//t=1
		if(vis[a[t]]==0) ans++,vis[a[t]] = 1;
		while(a[t]!=a[a[t]])
		{
			ans++,vis[a[a[t]]]=1;
			swap(a[t],a[a[t]]);
		}
		cout<<ans<<' ';
	}
	cout<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}