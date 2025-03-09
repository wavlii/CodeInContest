// Problem: 书法
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103785/E
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// QAQ

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	string s;getline(cin,s);
	string op;
	int p = s.length();
	while(cin>>op)
	{
		if(op == "LEFT")
		{
			p = max(0,p-1);
		}
		else if(op == "RIGHT")
		{
			p = min((int)s.length(),p+1);
		}
		else
		{
			char c;cin>>c;
			if(c == 'S')
			{
				cout<<s<<'\n';
			}
			else
			{
				int n;cin>>n;
				string t;
				for(int i = 1;i<=n;i++)
				{
					t += s[p-1];
				}
				s = s.substr(0,p)+t+s.substr(p);
				p  += n;
			}
		}
	}
	cout<<s<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}