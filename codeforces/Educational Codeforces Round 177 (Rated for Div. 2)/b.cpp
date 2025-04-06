// Problem: B. Large Array and SegmentsB. 大型数组和段
// Contest: Codeforces - Educational Codeforces Round 177 (Rated for Div. 2)Educational Codeforces Round 177 （分级为 Div. 2）
// URL: https://codeforces.com/contest/2086/problem/B
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
	long long n,k,x;cin>>n>>k>>x;
	vector<long long> a(n+1);
	long long sum = 0;
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];sum += a[i];
	}
	if(sum*k<x)
	{
		cout<<0<<'\n';
		return ;
	}
	if(sum*k==x)
	{
		cout<<1<<'\n';
		return ;
	}
	long long nn = x/sum;x%=sum;
	if(x==0)
	{
		cout<<1LL*(k-nn)*n+1<<'\n';
		return ;
	}
	long long p = 1;
		for(int i = n;i>=1;i--)
		{
			x -= a[i];
			if(x<=0) 
			{
				p = i;
				break;
			}
		}
	cout<<1LL*(k-nn-1)*n+p<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}