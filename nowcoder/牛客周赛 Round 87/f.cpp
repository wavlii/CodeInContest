// Problem: 小苯的ovo2.0
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/105623/F
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// ovo

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	string s;cin>>s;
	int n = s.length();
	s = " "+s;
	vector<int> pre(n+2);
	long long ans = -1;
	for(int l = 1;l<=n;l++)
	{
		for(int r = l;r<=n;r++)
		{
			string ts = s;
			pre[0]=0;
			for(int i = 1;i<=n;i++)
			{
				if(ts[i]=='?')
				{
					if(i>=l&&i<=r)
						ts[i] = 'v';
					else 
						ts[i] = 'o';
				}
				pre[i] = pre[i-1]+(ts[i]=='o');
			}
			long long sum = 0,las = 0;
			for(int i = n;i>=1;i--)
			{
				if(ts[i]=='o') las++;
				else sum += 1LL*las*pre[i];
			}

			ans = max(ans,sum);
		}
	}
	cout<<ans<<'\n';
	// cout<<"-----------\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}