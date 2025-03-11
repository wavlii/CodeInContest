// Problem: D. Scammy Game Ad
// Contest: Codeforces - Codeforces Round 1008 (Div. 2)
// URL: https://mirror.codeforces.com/contest/2078/problem/D
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
    vector<int> a(n+1),b(n+1);
    vector<char> c(n+1),d(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>c[i]>>a[i]>>d[i]>>b[i];
    }
    long long t = 0;
    long long l = 1,r = 1;
    for(int i = 1;i<=n;i++)
    {
        // cout<<l<<' '<<r<<' '<<t<<'\n';
        if(c[i] == '+'&&d[i] == '+')
        {
            t += a[i]+b[i];
        }
        else if(c[i] == '+'&&d[i] == 'x')
        {
            r += t;
            t = a[i]+(b[i]-1)*r;   
        }
        else if(c[i] == 'x'&&d[i] == '+')
        {
            l += t;
            t = b[i]+(a[i]-1)*l;
        }
        else
        {
            if(a[i]!=b[i])
            {
                if(a[i]>b[i]) l += t;
                else r += t;   
                t = (a[i]-1)*l+(b[i]-1)*r;
            }
            else
            {
                t += (a[i]-1)*(l+r+t);             
            }
        }
    }
    cout<<l+r+t<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}