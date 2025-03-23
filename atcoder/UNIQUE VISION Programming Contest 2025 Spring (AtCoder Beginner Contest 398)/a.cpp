// Problem: A - Doors in the Center
// Contest: AtCoder - UNIQUE VISION Programming Contest 2025 Spring (AtCoder Beginner Contest 398)
// URL: https://atcoder.jp/contests/abc398/tasks/abc398_a
// Memory Limit: 1024 MB
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
	if(n&1)
	{
		for(int i = 1;i<=n/2;i++)
		{
			cout<<"-";
		}
		cout<<'=';
		for(int i = 1;i<=n/2;i++)
		{
			cout<<"-";
		}
	}
	else
	{
		for(int i = 1;i<=n/2-1;i++)
		{
			cout<<"-";
		}
		cout<<"==";
		for(int i = 1;i<=n/2-1;i++)
		{
			cout<<"-";
		}
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