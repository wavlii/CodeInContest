// Problem: 智乃爬山
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103957/B
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
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++)
		cin>>a[i];
	int ans = -1;
	for(int i = 1;i<=n;i++)
	{
		if(i>=2&&i<=n-1&&a[i]>a[i-1]&&a[i]>a[i+1])
			ans = max(a[i]-((a[i-1]+a[i+1])/2),ans);
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