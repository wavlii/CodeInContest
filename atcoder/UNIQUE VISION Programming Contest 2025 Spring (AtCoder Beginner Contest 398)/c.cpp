// Problem: C - Uniqueness
// Contest: AtCoder - UNIQUE VISION Programming Contest 2025 Spring (AtCoder Beginner Contest 398)UNIQUE VISION 编程竞赛 2025 年春季 （AtCoder 初学者竞赛 398）
// URL: https://atcoder.jp/contests/abc398/tasks/abc398_c
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
	int n;cin>>n;
	map<int,int> t;
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
		t[a[i]]++;
	}
	int ans = -1,ans1 = -1;
	for(int i = 1;i<=n;i++)
	{
		if(t[a[i]]>1) a[i] = -1;
		if(ans<a[i]) ans = a[i],ans1 = i;
	}
	cout<<ans1<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}