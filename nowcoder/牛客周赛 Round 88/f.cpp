// Problem: 回响
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/106318/F
// Memory Limit: 2048 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	vector<int> a(n+2),ne(n+1);
	a[n+1] = 1e9;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	int pre = -1,ppre = -1;
	for(int i = 1;i<=n;i++)
	{
		if(a[i]!=0)
		{
			if(pre == -1)
				pre = a[i],ppre = i;
			else
			{
				if(abs(a[i]-a[ppre])>abs(a[i]-pre))
				{
					cout<<-1<<'\n';
					return ;
				}
				if(((abs(a[i]-a[ppre])-1)&1)&&(((i-ppre-1)&1)==0))
				{
					cout<<-1<<'\n';
					return ;
				}
				if(((abs(i-ppre)-1)&1)&&(((a[i]-a[ppre]-1)&1)==0))
				{
					cout<<-1<<'\n';
					return ;
				}
			}
		}
	}
	for(int i = n,pos = n+1;i>=1;i--)
	{
		if(a[i]==0) ne[i] = pos;
		else pos = i;
	}
	int fp = 1;
	while(a[fp]==0) fp++;
	for(int i = fp-1;i>=1;i--)
	{
		a[i] = a[i+1]+1;
	}
	for(int i = fp;i<=n;i++)
	{
		if(a[i]!=0) continue;
		if(ne[i]==n+1)
		{
			a[i] = a[i-1]+1;
			continue;
		}
		while(i<ne[i])
		{
			if(a[i-1]<a[ne[i]]) a[i] = a[i-1]+1;
			else a[i] = a[i-1]-1;
			i++;
		}
	}
	for(int i = 1;i<=n;i++)
	{
		cout<<a[i]<<" \n"[i == n];
	}
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}