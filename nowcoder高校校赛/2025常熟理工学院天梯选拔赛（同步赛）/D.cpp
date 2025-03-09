// Problem: v98pro
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103785/D
// Memory Limit: 64 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	set<int,greater<int>> a;
	for(int i = 1;i<=29;i++)
	{
		int x;cin>>x;
		a.insert(x);
	}
	int t;cin>>t;
	int tt = 1;
	for(int ele:a)
	{
		if(ele>t)tt++;
		else break;
	}
	if(tt<=3) cout<<1<<'\n';
	else if(tt<=9) cout<<2<<'\n';
	else if(tt<=18) cout<<3<<'\n';
	else cout<<4<<'\n';
	
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}