// Problem: A. To Zero  一个。归零
// Contest: Codeforces - Educational Codeforces Round 176 (Rated for Div. 2)Educational Codeforces Round 176 （分级为 Div. 2）
// URL: https://mirror.codeforces.com/contest/2075/problem/0
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
	long long ans = 0;
	int n,k;cin>>n>>k;
	if(n&1)
	{
		if(k&1) n-=k,ans++,ans+=(n%(k-1)!=0)+n/(k-1);
		else n-=(k-1),ans++,ans+=(n%k!=0)+n/k;
	}
	else
	{
		if(k&1) ans += (n%(k-1)!=0)+n/(k-1);
		else ans += (n%k!=0)+n/k;
	}
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