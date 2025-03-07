// Problem: B. Skibidus and Ohio
// Contest: Codeforces - Codeforces Round 1003 (Div. 4)
// URL: https://mirror.codeforces.com/contest/2065/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s;cin>>s;
	int len = s.length();
	for(int i = 0;i<len-1;i++)
	{
		if(s[i] == s[i+1])
		{
			cout<<1<<'\n';
			return ;
		}
	}
	cout<<len<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}