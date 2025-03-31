// Problem: 小苯的数组构造
// Contest: NowCoder
// URL: https://ac.nowcoder.com/acm/contest/105623/E
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
	long long n,x,y;cin>>n>>x>>y;
	if(x!=(x|y))//x的二进制为一定包含y，若未完全包含则NO
	{
		cout<<"NO\n";
		return ;
	}
	if((x&(x-1))==0)//二进制形式只有一个1
	{
		if(n&1)
		{
			cout<<"YES\n";
			while(n--) cout<<x<<" \n"[n==0];
		}
		else
		{
			cout<<"NO\n";
		}
	}
	else//二进制形式至少为两个1
	{
		//在异或和中两个相同的数异或和为0
		// t = x^y,那么x^t=y
		if(x==y)
		{
			if(n&1) 
			{
				cout<<"YES\n";
				while(n--) cout<<x<<" \n"[n==0];
			}
			else
			{
				int t = (x&-x);
				cout<<"YES\n";
				cout<<x-t<<' '<<t<<' ';
				for(int i = 3;i<=n;i++)
				{
					cout<<x<<" \n"[i==n];
				}
			}
			return ;
		}
		if(n&1)//如果n是奇数 
		{
			if(n==1)//n=1特判
			{
				if(x==y) cout<<"YES\n"<<x<<'\n';
				else cout<<"NO\n";
			}
			else//让前两个数异或起来为x,第三个为t,那么前三个结果就是y,第三个后面偶数个t,异或结果不变
			{
				long long t = (x&-x),t2 = x^y;
				cout<<"YES\n";
				cout<<x-t<<' '<<t<<' ';
				for(int i = 3;i<=n;i++)
				{
					cout<<t2<<" \n"[i==n];
				}
			}
		}
		else//第一个为x,前两个结果是y,后面偶数个t异或起来，结果不变
		{
			cout<<"YES\n";
			long long t = x^y;
			cout<<x<<' ';
			for(int i = 2;i<=n;i++)
				cout<<t<<" \n"[i==n];
		}
	}
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}