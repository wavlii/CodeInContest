// Problem: A. Binary Matrix  A. 二进制矩阵
// Contest: Codeforces - Codeforces Round 1010 (Div. 2, Unrated)Codeforces Round 1010 （Div. 2， 未评级）
// URL: https://codeforces.com/contest/2082/problem/A
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n,m;cin>>n>>m;
	vector<string> a(n);
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	int ma = 0,mb = 0;
	for(int j = 0;j<n;j++)
	{
		int t = 0;
		for(int i = 0;i<a[0].length();i++)
		{
			t ^= a[j][i]-'0';
		}
		if(t) ma++;
	}
	for(int i = 0;i<a[0].length();i++)
	{
		int t = 0;
		for(int j = 0;j<n;j++)
		{
			t ^= a[j][i]-'0';
		}
		if(t) mb++;
	}
	cout<<max(ma,mb)<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}