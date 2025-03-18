// Problem: B. Array Recoloring  B. 数组重新着色
// Contest: Codeforces - Educational Codeforces Round 176 (Rated for Div. 2)Educational Codeforces Round 176 （分级为 Div. 2）
// URL: https://mirror.codeforces.com/contest/2075/problem/B
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
	int n,k;cin>>n>>k;
	vector<int> a(n+1);
	
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	long long ans = 0;
	if(k == 1)
	{
		ans = max(ans,(long long)a[1]+a[n]);
		for(int i = 2;i<=n-1;i++)
		{
			ans = max((long long)a[i]+max(a[1],a[n]),ans);
		}
	}
	else
	{
		sort(a.begin()+1,a.end(),greater<int>());
		for(int i = 1;i<=k+1;i++) ans += a[i];
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