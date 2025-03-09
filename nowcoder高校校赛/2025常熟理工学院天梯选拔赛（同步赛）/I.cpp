// Problem: 下棋
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103785/I
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
	int n,k;cin>>n>>k;
	vector<int> e[n+1];
	for(int i = 2;i<=n;i++)
	{
		int x;cin>>x;
		e[x].emplace_back(i);	
	}
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	queue<array<int,2>> que;
	que.push({1,1});
	while(!que.empty())
	{
		auto [u,c] = que.front();
		que.pop();
		if(c&1)
		{
			int m = -inf,tu = -1;
			for(int ele:e[u])
			{
				if(a[ele]>m) tu = ele,m = a[ele];
			}
			if(tu != -1)
			{
				que.push({tu,c+1});
				k += m;	
			}
		}
		else
		{
			int m = inf,tu = -1;
			for(int ele:e[u])
			{
				if(a[ele]<m) tu = ele,m = a[ele];
			}
			if(tu != -1)
			{
				que.push({tu,c+1});
				k += m;	
			}
		}
	}
	cout<<k<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}