// Problem: C. Combination Lock
// Contest: Codeforces - Codeforces Round 1013 (Div. 3)
// URL: https://codeforces.com/contest/2091/problem/C
// Memory Limit: 256 MB
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
		int t = 0;
		for(int i = 1;i<=n;i++)
		{
			cout<<(i+t-1)%n+1<<" \n"[i==n];
			t++;
		}
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