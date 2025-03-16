// Problem: 小紫的01串操作
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103948/C
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
	string s;cin>>s;
	int len = s.length();
	int t = 0;
	char p = s[0];
	for(int i = 1;i<len;i++)
	{
		if(s[i]!=p) t++;
		p = s[i];
	}
	if(t<=4) cout<<"Yes\n";
	else cout<<"No\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}