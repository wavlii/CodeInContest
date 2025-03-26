// Problem: A. Olympiad Date
// Contest: Codeforces - Codeforces Round 1013 (Div. 3)
// URL: https://codeforces.com/contest/2091/problem/A
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
	map<int,int> t;
	t[0]=3,t[1]=1,t[2]=2,t[3]=1,t[5]=1;
	int sum = 8,ans = 0;
	bool ok = false;
	for(int i = 1;i<=n;i++)
	{
		int x;cin>>x;
		if(t[x]>0) t[x]--,sum--;
		if(!ok&&sum == 0) 
		{
			ans = i;
			ok = true;
		} 
	}
	if(ok) cout<<ans<<'\n';
	else cout<<0<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}