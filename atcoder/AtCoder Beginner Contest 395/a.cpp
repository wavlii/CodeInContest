// Problem: A - Strictly Increasing?
// Contest: AtCoder - AtCoder Beginner Contest 395
// URL: https://atcoder.jp/contests/abc395/tasks/abc395_a
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
    int pre;cin>>pre;
    bool no = false;
    for(int i = 2;i<=n;i++)
    {
        int x;
        cin>>x;
        if(x<=pre) no = true;
        pre = x;
    }
    if(no) cout<<"No\n";
    else cout<<"Yes\n";
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}
