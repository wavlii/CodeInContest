// Problem: A. Cloudberry Jam  A. 云莓果酱
// Contest: Codeforces - Educational Codeforces Round 177 (Rated for Div. 2)Educational Codeforces Round 177 （分级为 Div. 2）
// URL: https://codeforces.com/contest/2086/problem/0
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
	double n;cin>>n;
	n*=3;
	cout<<((int)(n*4/3)+1)/2<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}