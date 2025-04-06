// Problem: A. Max and Mod
// Contest: Codeforces - Teza Round 1 (Codeforces Round 1015, Div. 1 + Div. 2)
// URL: https://codeforces.com/contest/2084/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	if(n&1)
	{
		cout<<n<<' ';
		for(int i = 1;i<n;i++)
		{
			cout<<i<<' ';
		}
		cout<<'\n';
	}
	else
	{
		cout<<-1<<'\n';
	}
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}