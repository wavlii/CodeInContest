// Problem: 小苯的数字切割
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/105623/B
// Memory Limit: 2048 MB
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
	int ans = 0;
	bool ok = false;
	int p1=0,p2=1;
	while(p2<s.length())
	{
		if(s[p1]>s[p2]) {ok = true;break;}
		else if(s[p1]<s[p2]) {ok = false;break;}
		p1++,p2++;
	}
	if(ok) ans = stoi(s.substr(0,s.length()-1))+s[s.length()-1]-'0';
	else ans = stoi(s.substr(1))+s[0]-'0';
	cout<<ans<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}