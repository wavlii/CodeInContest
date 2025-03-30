// Problem: 好字符串
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/105825/B
// Memory Limit: 512 MB
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
	int cnt = 1;
	for(int i = 1;i<n;i++)
	{
		if(s[i]!=s[i-1]) cnt++;
	}
	if(cnt>=n-1) cout<<"YES\n";
	else cout<<"NO\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}