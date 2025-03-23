// Problem: B - Full House 3
// Contest: AtCoder - UNIQUE VISION Programming Contest 2025 Spring (AtCoder Beginner Contest 398)UNIQUE VISION 编程竞赛 2025 年春季 （AtCoder 初学者竞赛 398）
// URL: https://atcoder.jp/contests/abc398/tasks/abc398_b
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
	set<int> a;
	map<int,int> t;
	for(int i = 1;i<=7;i++)
	{
		int x;cin>>x;
		a.insert(x);
		t[x]++;
	}
	bool b = false,c = false;
	int q = -1;
	for(int p:a)
	{
		if(t[p]>=3)
		{
			q = p;
			b = true;
		}
	}
	for(int p:a)
	{
		if(t[p]>=2&&p!=q)
		{
			c = true;
		}
	}
	if(b&&c) cout<<"Yes\n";
	else cout<<"No\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}