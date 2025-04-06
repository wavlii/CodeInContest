// Problem: A - ABC400 Party
// Contest: AtCoder - AtCoder Beginner Contest 400AtCoder 初学者竞赛 400
// URL: https://atcoder.jp/contests/abc400/tasks/abc400_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	if(400%n==0)cout<<400/n;
	else cout<<-1;
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}