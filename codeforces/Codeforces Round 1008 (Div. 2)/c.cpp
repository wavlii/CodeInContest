// Problem: C. Breach of Faith
// Contest: Codeforces - Codeforces Round 1008 (Div. 2)
// URL: https://mirror.codeforces.com/contest/2078/problem/C
// Memory Limit: 256 MB
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
    vector<int> a(2*n+1);
    for(int i = 1;i<=2*n;i++) cin>>a[i];
    sort(a.begin()+1,a.end());
    long long t1 = 0,t2 = 0;
    for(int i = 1;i<n;i++) t1+=a[i];
    for(int i = n;i<=2*n;i++) t2+=a[i];
    cout<<a[n]<<' '<<t2-t1<<" ";
    for(int i = 1,j = n+1;i<=n-1;i++,j++) cout<<a[j]<<' '<<a[i]<<' ';
    cout<<a[2*n]<<'\n';
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}