// Problem: B - Make Target
// Contest: AtCoder - AtCoder Beginner Contest 395
// URL: https://atcoder.jp/contests/abc395/tasks/abc395_b
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
    vector<vector<char>> a(n+2,vector<char> (n+2,' '));
    int sx = 1,sy = 1;
    char c = '#';
	int tn = n;
    while(n>=1)
    {
        for(int x = sx;x<sx+n;x++) a[x][sy] = c;
        for(int y = sy;y<sy+n;y++) a[sx][y] = c;
        for(int x = sx;x<sx+n;x++) a[x][sy+n-1] = c;
        for(int y = sy;y<sy+n;y++) a[sx+n-1][y] = c;
        if(c == '#') c = '.';
        else c = '#';
        sx++,sy++;n-=2;
    }

    for(int i = 1;i<=tn;i++)
    {
		
        for(int j = 1;j<=tn;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
}

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}