// Problem: A - Hamming Distance
// Contest: AtCoder - AtCoder Beginner Contest 399
// URL: https://atcoder.jp/contests/abc399/tasks/abc399_a
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
	string a,b;
	cin>>a>>b;
	int ans = 0;
	for(int i = 0;i<n;i++)
	{
		if(a[i]!=b[i])ans++;
	}
	cout<<ans<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}