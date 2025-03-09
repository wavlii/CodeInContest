// Problem: 魔方
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103785/F
// Memory Limit: 256 MB
// Time Limit: 6000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 很简单的题，赛时也浪费了很长时间

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	vector<string>  m(9);
	m[1] = "  yy  ";
	m[2] = "  yy  ";
	m[3] = "oobbrr";
	m[4] = "oobbrr";
	m[5] = "  ww  ";
	m[6] = "  ww  ";
	m[7] = "  gg  ";
	m[8] = "  gg  ";
	int t;cin>>t;
	while(t--)
	{
		int a;cin>>a;
		if(a == 1)
		{
			char c;cin>>c;
			if(c == 'R')
			{
				char t = m[1][3];
				for(int i = 1;i<=6;i++)
				{
					m[i][3] = m[i+2][3];
				}
				m[7][3] = t;
				m[8][3] = t;
			}
			else
			{
				
				
				char t = m[7][2];
				for(int i = 6;i>=1;i--)
				{
					m[i+2][2] = m[i][2];
				}
				m[1][2] = t;
				m[2][2] = t;
			}
		}
		else
		{
			for(int i = 1;i<=8;i++)
			{
				cout<<m[i]<<'\n';
			}
		}
		
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