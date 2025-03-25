// Problem: 小苯的Polygon
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/104637/E
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
	{
		cin>>a[i];
	}
	sort(a.begin()+1,a.end());
	bool ok = false;
	vector<bool> vis(1e4+10,0);
	vis[0] = 1;
	int ans = 1e9;
	for(int _ = 1;_<=n;_++)
	{
		for(int i = 1e4;i>=0;i--)
		{
			if(i>=a[_]&&vis[i-a[_]]) vis[i] = 1; 
		}
		if(_>=3)
		{
			for(int i = 2*a[_]+1;i<=1e4;i++)
			{
				if(vis[i])
				{
					ok = true;
					ans = min(ans,i);
					break;
				}
			}	
		}
	}
	if(ok)
		cout<<ans<<'\n';
	else
		cout<<-1<<'\n';
	
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}