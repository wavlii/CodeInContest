// Problem: C - Shortest Duplicate Subarray
// Contest: AtCoder - AtCoder Beginner Contest 395
// URL: https://atcoder.jp/contests/abc395/tasks/abc395_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<63)-1;
const int inf = ((unsigned int)1<<31)-1;

void solve()
{
    int n;cin>>n;
	vector<int> a(n+1);
    map<int,int> t;
    for(int i  = 1;i<=n;i++) cin>>a[i];
    int ans = -1;
    for(int i = 1;i<=n;i++)
    {
        if(!t[a[i]]) t[a[i]] = i;
        else
        {
            ans = max(ans, i-t[a[i]]+1);
            t[a[i]] = i;
        }
    }
    cout<<ans<<'\n';
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}