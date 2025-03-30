// Problem: C. Asuna and the MosquitoesC. 亚丝娜和蚊子
// Contest: Codeforces - Codeforces Round 1014 (Div. 2)Codeforces 第 1014 轮 （Div. 2）
// URL: https://codeforces.com/contest/2092/problem/C
// Memory Limit: 256 MB
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
	priority_queue<long long> odd,even;
	for(int i = 1;i<=n;i++)
	{
		int x;cin>>x;
		if(x&1) odd.push(x);
		else even.push(x);
	}
	while(odd.size()&&even.size())
	{
		if(odd.size()>even.size())
		{
			long long t = odd.top()+even.top()-1;
			odd.pop();even.pop();
			even.push(t);
		}
		else
		{
			long long t = odd.top()+even.top();
			odd.pop();even.pop();
			odd.push(t);
		}
	}
	if(odd.size()) cout<<odd.top()<<"\n";
	else cout<<even.top()<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}