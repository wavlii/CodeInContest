// Problem: A. Skibidus and Amog'u
// Contest: Codeforces - Codeforces Round 1003 (Div. 4)
// URL: https://mirror.codeforces.com/contest/2065/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
void solve()
{
	string s;cin>>s;
	s.pop_back();
	s.pop_back();
	s += 'i';
	cout<<s<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}