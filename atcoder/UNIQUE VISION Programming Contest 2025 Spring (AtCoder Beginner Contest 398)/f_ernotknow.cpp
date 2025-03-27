// Problem: F - ABCBA
// Contest: AtCoder - UNIQUE VISION Programming Contest 2025 Spring (AtCoder Beginner Contest 398)UNIQUE VISION 编程竞赛 2025 年春季 （AtCoder 初学者竞赛 398）
// URL: https://atcoder.jp/contests/abc398/tasks/abc398_f
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


// 马拉车板子题，我的做法好像假了？？

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	string s;cin>>s;
	int len = s.length();
	s = " "+s;
	int p = 0;bool stop = false;
	for(int i = 1;i<=len;i++)
	{
		int r = len,l = i;
		while(s[l]==s[r])
		{
			l++,r--;
			if(l>=r) 
			{
				p = i;
				stop = true;
				break;
			}
		}
		if(stop) break;
	}
	for(int i = 1;i<=len;i++) cout<<s[i];
	for(int i = p-1;i>=1;i--) cout<<s[i];
	cout<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}