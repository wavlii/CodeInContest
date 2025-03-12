// Problem: A. Draw a Square
// Contest: Codeforces - Codeforces Round 1009 (Div. 3)
// URL: https://mirror.codeforces.com/contest/2074/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int a,b,c,d;cin>>a>>b>>c>>d;
	if(a == b&&b == c&&c == d) cout<<"YES\n";
	else cout<<"NO\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}