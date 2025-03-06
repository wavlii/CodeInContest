// Problem: B. Having Been a Treasurer in the Past, I Help Goblins Deceive
// Contest: Codeforces - Codeforces Round 1006 (Div. 3)
// URL: https://mirror.codeforces.com/contest/2072/problem/B
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
	string s;cin>>s;
	int a = count(s.begin(),s.end(),'-'),b =count(s.begin(),s.end(),'_');
	long long ans = 0;
	if(a&1)
	{
		ans = 1LL*(a/2)*(a/2+1)*b;
	}
	else
	{
		ans = 1LL*(a/2)*(a/2)*b;
	}
	cout<<ans<<"\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}