// Problem: B. Serval and Final MEXB. 薮猫和最终 MEX
// Contest: Codeforces - Codeforces Round 1011 (Div. 2)Codeforces 第 1011 轮 （Div. 2）
// URL: https://codeforces.com/contest/2085/problem/B
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
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++) cin>>a[i];
	if(accumulate(a.begin()+1,a.end(),0) == 0)
	{
		cout<<3<<'\n';
		cout<<3<<' '<<n<<'\n';
		cout<<1<<' '<<2<<'\n';
		cout<<1<<' '<<2<<'\n';
		return ;
	}
	int l = -1;
	for(int i = 1;i<=n;i++)
	{
		if(a[i] == 0)
		{
			l = i;
			break;
		}
	}
	if(l == -1)
	{
		cout<<1<<'\n';
		cout<<1<<' '<<n<<'\n';
	}
	else
	{
		if(l!=1)
		{
			cout<<2<<'\n';
			cout<<2<<' '<<n<<'\n';
			cout<<1<<' '<<2<<'\n';
		}
		else
		{
			if(a[n]!=0)
			{
				cout<<2<<'\n';
				cout<<1<<' '<<n-1<<'\n';
				cout<<1<<' '<<2<<'\n';
			}
			else
			{
				cout<<3<<'\n';
				cout<<3<<' '<<n<<'\n';
				cout<<1<<' '<<2<<'\n';
				cout<<1<<' '<<2<<'\n';
			}
		}
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