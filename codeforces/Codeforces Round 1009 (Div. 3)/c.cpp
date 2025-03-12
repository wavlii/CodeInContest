// Problem: C. XOR and Triangle
// Contest: Codeforces - Codeforces Round 1009 (Div. 3)Codeforces 第 1009 轮 （第 3 组）
// URL: https://mirror.codeforces.com/contest/2074/problem/C
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
	long long t = 1;
	while(t<n) t*=2;
	if(t == n||t == n+1) cout<<-1<<'\n';
	else
	{
		for(int y = n-1;y>=1;y--)
		{
			if(y+(y^n)>n&&(y^n)<y+n)
			{
				cout<<y<<'\n';
				break;
			}
		}
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