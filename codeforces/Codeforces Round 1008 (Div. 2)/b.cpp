// Problem: B. Vicious Labyrinth
// Contest: Codeforces - Codeforces Round 1008 (Div. 2)
// URL: https://mirror.codeforces.com/contest/2078/problem/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,k;cin>>n>>k;
	if(k&1)
	{
		for(int i = 1;i<n;i++)
		{
			cout<<n<<' ';
		}
		cout<<n-1<<'\n';
	}
	else
	{
		for(int i = 1;i<n-1;i++)
		{
			cout<<n-1<<' ';
		}
		cout<<n<<' '<<n-1<<'\n';
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