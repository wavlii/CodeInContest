// Problem: C - Make it Forest
// Contest: AtCoder - AtCoder Beginner Contest 399
// URL: https://atcoder.jp/contests/abc399/tasks/abc399_c
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;

// 并查集

struct DSU {
    std::vector<int> fa, siz;

    DSU() {}

    DSU(int n) {
        init(n);
    }

    void init(int n) {
        fa.resize(n);
        std::iota(fa.begin(), fa.end(), 0);
        siz.assign(n, 1);
    }

    int find(int x) {
        while (x != fa[x]) {
            x = fa[x] = fa[fa[x]];
        }
        return x;
    }

    bool same(int x, int y) {
        return find(x) == find(y);
    }

    bool merge(int x, int y) {
        x = find(x);
        y = find(y);
        if (x == y) {
            return false;
        }
        siz[x] += siz[y];
        fa[y] = x;
        return true;
    }

    int size(int x) {
        return siz[find(x)];
    }
};

void solve()
{
	int n,m;cin>>n>>m;
	DSU d(n+1);
	for(int i = 1;i<=m;i++)
	{
		int a,b;cin>>a>>b;
		d.merge(a,b);
	}
	set<pair<int,int>> se;
	long long ans = 0;
	for(int i = 1;i<=n;i++)
	{
		se.insert({d.find(i),d.size(i)});
	}
	for(auto [u,w]:se)
	{
		ans += w-1;
	}
	cout<<m-ans<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}