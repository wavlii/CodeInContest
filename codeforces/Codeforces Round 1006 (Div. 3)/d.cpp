// Problem: D. For Wizards, the Exam Is Easy, but I Couldn't Handle It
// Contest: Codeforces - Codeforces Round 1006 (Div. 3)
// URL: https://mirror.codeforces.com/contest/2072/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 数据范围 n^2 <= 10^6 ------- 暴力
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
	int pret = -1;
	int lans = 0,rans = 0;
	for(int i = 1;i<=n;i++)
	{
		int t = 0;
		for(int j = i;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				t++;	
			}			
			else if(a[i]<a[j]) t--;
			if(t>pret) lans = i,rans = j,pret = t;
		}
	}
	cout<<lans<<' '<<rans<<"\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}