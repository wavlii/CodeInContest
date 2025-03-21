// Problem: 智乃的天平
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103957/A
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
	int a,b,w;cin>>a>>b>>w;
	if(a == w||b==w||a+b==w||abs(a-b)==w)
		cout<<"Yes\n";
	else 
		cout<<"No\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}