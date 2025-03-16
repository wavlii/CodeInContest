// Problem: 小紫的优势博弈
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/103948/D
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
	string s;cin>>s;
	int len = s.length();
	int n1 = count(s.begin(),s.end(),'1'),n0 = n-n1;
	int ans = 0;
	int tn1 = 0,tn0 = 0;
	int p1 = -1,p0 = -1,p3 = -1;
	for(int i = len;i>=1;i--)
	{
		if(s[i-1] == '1') tn1++;
		else tn0++;
		if(p1 == -1&&(tn1&1)&&((tn0&1)==0)) p1 = i;
		if(p0 == -1&&(tn0&1)&&((tn1&1)==0)) p0 = i;
		if(p3 == -1&&(tn0&1)&&(tn1&1)) p3 = i;
	}
	for(int i = 1;i<n;i++)
	{
		if(s[i-1] == '1') n1--;
		else n0--;
		if((n1&1)&&(n0&1))
		{
			if(i<p3-2) 
			{
				ans ++;
			}
		}
		else if(n1&1)
		{
			if(i<p1-2) 
			{
				ans ++;
			}
		}
		else if(n0&1)
		{
			if(i<p0-2) 
			{
				ans ++;
			}
		}
		else
		{
			ans ++;
		}
	}
	
	cout<<(double)ans/(double)n<<'\n';
	
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}