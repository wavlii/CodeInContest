// Problem: D. Counting Points  D. 计算积分
// Contest: Codeforces - Codeforces Round 1009 (Div. 3)Codeforces 第 1009 轮 （第 3 组）
// URL: https://mirror.codeforces.com/contest/2074/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

// 一开始以为很难，哎还是自己太菜了

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
struct node
{
	int x,y;
	node(int a,int b):x(a),y(b){};
};
bool cmp(node a,node b)
{
	if(a.x!=b.x) return a.x<b.x;
	else return a.y<b.y;
} ;
void solve()
{
	int n,m;cin>>n>>m;
	vector<node> a;
	vector<int> x(n),r(n);
	for(int i = 0;i<n;i++) cin>>x[i];
	for(int i = 0;i<n;i++) cin>>r[i];
	for(int i = 0;i<n;i++)
	{
		for(int j = -r[i];j<=r[i];j++)
		{
			int y = sqrt(1LL*r[i]*r[i]-1LL*j*j);
			a.push_back({x[i]+j,y});
		}
	}
	sort(a.begin(),a.end(),cmp);
	long long ans = 0;
	int size = a.size();
	for(int i = 0;i<size;i++)
	{
		while((i<size-1)&&a[i].x == a[i+1].x) i++;
		ans += 2LL*a[i].y+1;
	}
	cout<<ans<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}