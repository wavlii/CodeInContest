// Problem: 智乃的“K”叉树
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103957/D
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
	vector<int> cnt(n+1);
	int ans1 = -1;
	for(int i = 1;i<n;i++)
	{
		int a,b;cin>>a>>b;
		cnt[a]++,cnt[b]++;
	}
	int ans = -1;
	for(int i = 1;i<=n;i++)
	{
		ans = max(ans,max(1,cnt[i]-1));
	}
	for(int i = 1;i<=n;i++)
	{
		if(cnt[i]!=ans+1) 
		{
			ans1 = i;break;
		}
	}
	cout<<ans<<' '<<ans1<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}