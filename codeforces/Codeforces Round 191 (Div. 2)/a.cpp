// Problem: A. Flipping Game
// Contest: Codeforces - Codeforces Round 191 (Div. 2)
// URL: https://codeforces.com/problemset/problem/327/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++) cin>>a[i];
	int ans = count(a.begin()+1,a.end(),1);
	if(ans == n)
	{
		cout<<ans-1<<'\n';
		return ;
	}
	int t = -1;
	for(int i = 1;i<=n;i++)
	{
		int tt = 0;
		for(int j = i;j<=n;j++)
		{
			if(a[j] == 1) tt--;
			else tt++;
			if(tt>t) t = tt;
		}
	}
	ans += t;
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