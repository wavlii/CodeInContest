// Problem: D - Bonfire
// Contest: AtCoder - UNIQUE VISION Programming Contest 2025 Spring (AtCoder Beginner Contest 398)
// URL: https://atcoder.jp/contests/abc398/tasks/abc398_d
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,r,c;cin>>n>>r>>c;
	string s;cin>>s;
	int x0 = 0,y0 = 0;
	set<pair<int,int>> se;
	se.insert({x0,y0});
	for(char &ch:s)
	{
		switch(ch)
		{
			case 'N':
				r++,x0++;
				break;
			case 'S':
				r--,x0--;
				break;
			case 'E':
				c--,y0--;
				break;
			case 'W':
				c++,y0++;
				break;
		}
		se.insert({x0,y0});
		if(se.find({r,c})!=se.end()) cout<<1;
		else cout<<0;
		// se.insert({x0,y0});
	}
	cout<<"\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}