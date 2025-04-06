// Problem: D. Arcology On Permafrost
// Contest: Codeforces - Teza Round 1 (Codeforces Round 1015, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/2084/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,m,k;cin>>n>>m>>k;
	if(n<=(m+1)*k)
	{
		while(n)
		{
			for(int i = 0;i<k;i++,n--)
			{
				if(n==0)break;
				cout<<i<<' ';
			}
		}
	}
	else
	{
		int t = n/(m+1);
		int tt = n%(m+1);
		if(n%(m+1)==0)
		{
			while(n)
			{
				for(int i = 0;i<t;i++,n--)
				{
					if(n==0)break;
					cout<<i<<' ';
				}
			}
			return ;
		}
		while(n)
		{
			for(int i = 0;i<t;i++,n--)
			{
				if(n==0)break;
				cout<<i<<' ';
			}
			if(tt) 
			{
				cout<<t<<' ';
				n--;
				tt--;
			}
		}
	}
	cout<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}