// Problem: 小苯的Z串匹配
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/105623/C
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
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++) cin>>a[i];
	string s;cin>>s;s = " "+s;
	int ans = 0;
	int t1=0,t2=0;
	for(int i = 1;i<=n;i++)
	{
		if(a[i]>0) a[i] = 1;
		if(a[i]<0) a[i] = -1;
		if(s[i]=='>'&&a[i]<=0) ans++,a[i]=1;
		if(s[i]=='<'&&a[i]>=0) ans++,a[i]=-1;
		if(s[i]=='Z'&&a[i]*a[i-1]<=0) ans++,a[i]=a[i-1];
	}
	cout<<ans<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}