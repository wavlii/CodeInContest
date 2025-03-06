// Problem: B. Robot Program  B. 机器人程序
// Contest: Codeforces - Educational Codeforces Round 175 (Rated for Div. 2)Educational Codeforces Round 175 （分级为 2 组）
// URL: https://mirror.codeforces.com/contest/2070/problem/B
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
	long long n,x,k;cin>>n>>x>>k;
	string s;cin>>s;
	long long  t = 0;
	bool stop = false;
	long long p = 0,tp = 0;
	bool canzero = false;
	for(int i = 0;i<n;i++)
	{
		if(x == 0)
		{
			stop = true;
			break;
		}
		if(s[i] == 'L') x--;
		else x++;
		t++;
	}
	if(x == 0) stop = true;
	for(int i = 0;i<n;i++)
	{
		if(i!=0&&p == 0)
		{
			canzero = true;
			break;
		}
		if(s[i] == 'L') p--;
		else p++;
		tp++;
	}
	if(p == 0) canzero = true;
	// cout<<tp<<"----\n";
	long long ans = 0;
	
	if(stop)
	{
		if(k<t)
		{
			cout<<0<<'\n';
		}
		else
		{
			if(canzero)
			{
				k -= t;
				ans = 1;
				ans += (k/tp);
				cout<<ans<<'\n';	
			}
			else
			{
				cout<<1<<'\n';
			}
			
		}
	}
	else
	{
		cout<<"0\n";
	}
	
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}