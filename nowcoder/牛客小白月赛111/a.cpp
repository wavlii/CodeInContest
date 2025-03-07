// Problem: 田忌赛马
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/102742/A
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
	vector<int> a(3),b(3);
	for(int i = 0;i<3;i++)
	{
		cin>>a[i];
	}
	for(int i = 0;i<3;i++)
	{
		cin>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	if(b[2]>a[1]&&b[1]>a[0]) cout<<"Yes\n";
	else cout<<"No\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}