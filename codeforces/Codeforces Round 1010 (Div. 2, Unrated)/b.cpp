// Problem: B. Floor or Ceil
// Contest: Codeforces - Codeforces Round 1010 (Div. 2, Unrated)
// URL: https://codeforces.com/contest/2082/problem/B
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
int f(int x,int n)
{
	while(n&&x>0) x>>=1,n--;
	return x;
}
int c(int x,int n)
{
	while(n&&x>1) x = ((x+1)>>1),n--;
	return x;
}

void solve()
{
	int x,m,n;cin>>x>>n>>m;
	cout<<f(c(x,m),n)<<' '<<c(f(x,n),m)<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}