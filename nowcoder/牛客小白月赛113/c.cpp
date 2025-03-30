// Problem: 连续数组
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/105825/C
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
	int n;cin>>n;
	vector<vector<int>> e(n+1); 
	bool ok = true;
	multiset<int> se;
	for(int i = 1;i<=n;i++)
	{
		int size;cin>>size;
		e[i].resize(size+1);
		for(int j = 1;j<=size;j++)
		{
			cin>>e[i][j];
			if(j>1&&e[i][j]<=e[i][j-1]) ok = false;
			se.insert(e[i][j]);
		}
	}
	if(!ok)
	{
		cout<<"NO\n";
		return ;
	}
	int pre = -1;
	for(int ele:se)
	{
		if(pre != -1)
		{
			if(ele-pre != 1)
			{
				cout<<"NO\n";
				return ;
			}
		}
		pre = ele;
	}
	cout<<"YES\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}