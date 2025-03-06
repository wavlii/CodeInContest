// Problem: C. Limited Repainting  C. 有限重绘
// Contest: Codeforces - Educational Codeforces Round 175 (Rated for Div. 2)Educational Codeforces Round 175 （分级为 2 组）
// URL: https://mirror.codeforces.com/contest/2070/problem/C
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 结果二分
#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,k;cin>>n>>k;
	string s;cin>>s;
	vector<int> a(n+1);
	for(int i = 1;i<=n;i++)
	{
		cin>>a[i];
	}
	function<int(int)> check = [&](int mid)
	{
		bool ok = false;
		int nk = 0;
		for(int i = 0;i<n;i++)
		{
			if(ok == false&&a[i+1]>mid&&s[i] == 'B')
			{
				nk++;
				ok = true;
			}
			if(ok == true&&a[i+1]>mid&&s[i] == 'R')
			{
				ok = false;
			}
		}
		return nk;
	};
	int r = 1e9+10,l = -1;
	while(l+1<r)
	{
		int mid = (l+r)>>1;
		if(check(mid)<=k) r = mid;
		else l = mid;
	}
	cout<<r<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}