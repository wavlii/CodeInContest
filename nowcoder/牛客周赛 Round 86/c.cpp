// Problem: 小苯的数字消除
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/104637/C
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
	int n;cin>>n;
	stack<char> st;
	string s;cin>>s;
	for(int i = 0;i<n;i++)
	{
		if(!st.empty())
		{
			if(st.top() == s[i]) st.pop();
			else st.push(s[i]);
		}
		else
		{
			st.push(s[i]);
		}
	}
	cout<<st.size()/2<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}