// Problem: C1. Skibidus and Fanum Tax (easy version)
// Contest: Codeforces - Codeforces Round 1003 (Div. 4)Codeforces 第 1003 轮 （Div. 4）
// URL: https://mirror.codeforces.com/contest/2065/problem/C1
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void solve()
{
	int n,m;cin>>n>>m;
	vector<int> a(n+1);
	int b;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	// for(int i = 1;i<=m;i++)
	// {
		// cin>>b[i];
	// }
	cin>>b;
	if(a[1]>b-a[1])
		a[1] = b-a[1];
	for(int i = 1;i<n;i++)
	{
		if(a[i]>a[i+1])
		{
			if(a[i+1]<b-a[i+1])
			{
				a[i+1] = b-a[i+1];
			}
			if(a[i]>a[i+1])
			{
				cout<<"NO\n";
				return ;
			}
		}
		else
		{
			if(a[i+1]>b-a[i+1]&&a[i]<=b-a[i+1])
				a[i+1] = b-a[i+1];
		}
	}
	cout<<"YES\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}