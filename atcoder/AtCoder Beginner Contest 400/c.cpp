// Problem: C - 2^a b^2
// Contest: AtCoder - AtCoder Beginner Contest 400
// URL: https://atcoder.jp/contests/abc400/tasks/abc400_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;

void solve()
{
	long double n;cin>>n;
	long long ans = 0;
	for(long double t = 2;t<=n;t*=2)
	{
		ans++;
		long long tt = floor(sqrtl(n/t));
		if(tt%2==0) tt--;
		ans += tt/2;
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