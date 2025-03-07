// Problem: 复读姬
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/102742/C
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
	int ans = 0;
	vector<string> a(n+1);
	for(int i = 1;i<=n;i++) cin>>a[i];
	for(int i = 1;i<=n;i++)
	{
		if(a[i] == a[i-1]) continue;
		int t = 1;
		bool bb = false;
		for(int j = i+1;j<=n;j++)
		{
			if(bb&&a[j]!=a[i]) break;
			if(a[j]!=a[i]) bb = true;
			if(a[j] == a[i]) t++; 
		}
		ans = max(ans,t);
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