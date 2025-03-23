// Problem: 小苯的数字集合
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/104637/D
// Memory Limit: 512 MB
// Time Limit: 4000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	long long a,b;
	cin>>a>>b;
	if((a&b)==0||(a^b)==0)
	{
		cout<<1<<'\n';
		return ;
	}
	else
	{
		int arr[4];arr[0] = a&b;arr[1] = a^b;arr[2] = gcd(a,b);arr[3] = a|b;
		for(int i = 0;i<4;i++)
		{
			if((a^arr[i])==0||(b^arr[i])==0) 
			{
				cout<<2<<'\n';
				return ;
			}
			if((a&arr[i])==0||(b&arr[i])==0) 
			{
				cout<<2<<'\n';
				return ;
			}
		}
	}
	cout<<3<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}