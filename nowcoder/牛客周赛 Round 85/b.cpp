// Problem: 小紫的劣势博弈
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103948/B
// Memory Limit: 2048 MB
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
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	long long x = 0;
	sort(a.begin()+1,a.end());
	int k = 1;
	while(k<=n)
	{
		x += a[k++];
		if(k>n) break;
		x -= a[k++];
	}
	cout<<x<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}