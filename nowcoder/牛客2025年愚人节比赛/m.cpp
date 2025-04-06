// Problem: 说一不二
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/104956/M
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
	bool ok = false;
	for(char c:s)
	{
		if(c=='1')
		{
			ok = true;
			break;
		}
	}
	if(ok)
	{	for(int i = 0;i<s.length();i++)
		{
			if(s[i]!='2') cout<<s[i];
		}}
	else
		{cout<<s;}
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}