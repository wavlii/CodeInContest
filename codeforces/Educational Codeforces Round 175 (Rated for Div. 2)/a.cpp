// Problem: A. FizzBuzz Remixed  A. FizzBuzz 混音
// Contest: Codeforces - Educational Codeforces Round 175 (Rated for Div. 2)Educational Codeforces Round 175 （分级为 2 组）
// URL: https://mirror.codeforces.com/contest/2070/problem/0
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	int ans = 1;ans += n/15*3;
	if(n%15<=2) ans += n%15;
	else ans += 2;
	cout<<ans<<"\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}