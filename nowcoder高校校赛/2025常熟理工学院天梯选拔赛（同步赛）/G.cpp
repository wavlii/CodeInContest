// Problem: 女神节的魔法花园
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103785/G
// Memory Limit: 760 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 很简单的贪心

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	string s;cin>>s;
	int len = s.length();
	s = " "+s;
	int n3 = count(s.begin(),s.end(),'3');
	if(n3 == 0)
	{
		cout<<0<<'\n';
		return ;
	}
	if(n3==1)
	{
		int nn = 0;
		for(int i = n;i>=1;i--)
		{
			if(s[i]!='3') nn++;
			else break;
		}
		if(nn<=1)
		{
			cout<<0<<'\n';
			return ;
		}
		else
		{
			cout<<nn-1<<'\n';
			return ;
		}
	}
	else
	{
		int l = 0;
		for(int i = 1;i<=n;i++)
		{
			if(s[i] == '3')
			{
				l = i;
				break;
			}
		}
		cout<<n-l<<'\n';
	}
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}