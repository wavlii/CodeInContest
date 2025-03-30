// Problem: B. Lady Bug  B. 瓢虫
// Contest: Codeforces - Codeforces Round 1014 (Div. 2)Codeforces 第 1014 轮 （Div. 2）
// URL: https://codeforces.com/contest/2092/problem/B
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
	int n;cin>>n;
	string a,b;cin>>a>>b;
	int sum1 = 0,sum2 = 0;
	for(int i = 0;i<n;i++)
	{
		if(a[i]=='1')
		{
			if(i&1) sum2++;
			else sum1++;
		}
		if(b[i]=='1')
		{
			if((i&1)) sum1++;
			else sum2++;	
		}
	}
	bool ok = true;
	// cout<<sum1<<' '<<sum2<<'\n';
	if(sum1>n/2) ok = false;
	if(sum2>(n+1)/2) ok = false;
	if(ok) cout<<"YES\n";
	else cout<<"NO\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}