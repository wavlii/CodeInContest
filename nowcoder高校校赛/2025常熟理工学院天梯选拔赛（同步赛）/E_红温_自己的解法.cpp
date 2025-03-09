// Problem: 书法
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103785/E
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 题目要求很简单，赛时认为普通的拼接会TLE，也因为这个题红温了(还是自己太菜了)
//              QAQ
// 自己的想法就是，用了一个vector<int> tc来记录每个字符的重复次数
// 然后根据当前指针位置和指针的偏移量来判断当前指针指向的字符是哪个字符，然后根据指令进行操作
// 哎，当时状态不太好吧，这是赛后补完的，赛时写的很乱一直WA

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	string s;getline(cin,s);
	string op;
	int p = s.length();
	int t = 0;
	int len = s.length();
	vector<int> tc(len,1);
	while(cin>>op)
	{
		if(op == "LEFT")
		{
			if(p == 0) continue;
			t--;
			if(t+tc[p-1] == 0) t = 0,p--;
		}
		else if(op == "RIGHT")
		{
			if(p == len) continue;
			t++;
			if(t-tc[p] == 0) t = 0,p++;
		}
		else
		{
			char c;cin>>c;
			if(c == 'S')
			{
				for(int i = 0;i<len;i++)
				{
					for(int j = 1;j<=tc[i];j++)
					{
						cout<<s[i];
					}
				}
				cout<<'\n';
			}
			else
			{
				int nt;cin>>nt;
				if(t<=0) tc[p-1]+=nt;
				else tc[p]+=nt;
			}
		}
	}
	for(int i = 0;i<len;i++)
	{
		for(int j = 1;j<=tc[i];j++)
		{
			cout<<s[i];
		}
	}
	cout<<'\n';
	
	
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}