// Problem: B - Sum of Geometric Series
// Contest: AtCoder - AtCoder Beginner Contest 400
// URL: https://atcoder.jp/contests/abc400/tasks/abc400_b
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	long long n,m;cin>>n>>m;
	long long t = 0,tt = 1;
	for(int i = 0;i<=m;i++)
	{
		t += tt;
		if(t>1e9)
		{
			cout<<"inf";
			return ;
		}
		tt *= n;
	}
	cout<<t;
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}