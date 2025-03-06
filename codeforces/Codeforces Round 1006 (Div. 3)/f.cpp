// Problem: F. Goodbye, Banker Life
// Contest: Codeforces - Codeforces Round 1006 (Div. 3)
// URL: https://mirror.codeforces.com/contest/2072/problem/F
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)


// 杨辉三角----------lucas定理(mod == 2)
#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
const int p = 2;

int C(int a,int b)
{
	if(a == 0&&b == 1) return 0;
	return 1;
}
int lucas(int a,int b)
{
	if(b == 0) return 1;
	return lucas(a/p,b/p)*C(a%p,b%p)%p;	
}
void solve()
{
	int n,k;cin>>n>>k;
	for(int i = 0;i<=n-1;i++)
	{
		cout<<lucas(n-1,i)*k<<' ';
	}
	cout<<"\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}