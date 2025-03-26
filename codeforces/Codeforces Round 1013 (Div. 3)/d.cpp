// Problem: D. Place of the Olympiad
// Contest: Codeforces - Codeforces Round 1013 (Div. 3)
// URL: https://codeforces.com/contest/2091/problem/D
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	long long n,m,k;cin>>n>>m>>k;
	long long l = 0,r = m+1;
	while(l+1<r)
	{
		int mid = (l+r)>>1;
		int t = (m+1)/(mid+1);
		// cout<<mid<<' '<<t<<" "<<(t*mid+m-min(m,t*(mid+1)))*n<<'\n';
		if((t*mid+m-min(1LL*m,1LL*t*(mid+1)))*n>=k) r = mid;
		else l = mid;
		// cout<<l<<' '<<r<<'\n';
	}
	cout<<r<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}