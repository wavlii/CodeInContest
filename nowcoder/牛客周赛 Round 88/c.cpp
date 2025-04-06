// Problem: 坠入
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/106318/C
// Memory Limit: 2048 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	vector<pair<double,double>> a(4);
	for(int i = 1;i<=3;i++)
	{
		cin>>a[i].first>>a[i].second;
	}
	if(a[1].second==(a[2].second+a[3].second)/2) {cout<<"Yes\n";return ;}
	if(a[2].second==(a[1].second+a[3].second)/2) {cout<<"Yes\n";return ;}
	if(a[3].second==(a[2].second+a[1].second)/2) {cout<<"Yes\n";return ;}
	if(a[1].first==(a[2].first+a[3].first)/2){cout<<"Yes\n";return ;}
	if(a[3].first==(a[2].first+a[1].first)/2) {cout<<"Yes\n";return ;}
	if(a[2].first==(a[1].first+a[3].first)/2) {cout<<"Yes\n";return ;}
	cout<<"no\n";
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}