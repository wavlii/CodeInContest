// Problem: A. Serval and String Theory
// Contest: Codeforces - Codeforces Round 1011 (Div. 2)
// URL: https://codeforces.com/contest/2085/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 这个题我好像题都没读懂。。。


#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,k;cin>>n>>k;
	string s;cin>>s;
	map<char,int> t;
	int tn = 0;
	for(char c:s)
		if(t[c] == 0) t[c] = 1,tn++;
	string ts = s;
	reverse(ts.begin(),ts.end());
	if(tn == 1||(k==0&&s>=ts)) cout<<"No\n";
	else cout<<"Yes\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}