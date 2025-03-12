// Problem: E. Empty Triangle  E. 空三角形
// Contest: Codeforces - Codeforces Round 1009 (Div. 3)Codeforces 第 1009 轮 （第 3 组）
// URL: https://mirror.codeforces.com/contest/2074/problem/E
// Memory Limit: 512 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)
 
// 交互题
// 自己瞎搞的随机数过了，没想到正解就是随机数

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
void solve()
{
	int n;cin>>n;
	int tn = n;
	int a = rand()%n+1;
    int b = rand()%n+1;
    while(a == b) b = rand()%n+1;
    int c = rand()%n+1;
    while(c == a || c == b) c = rand()%n+1;
    // cout<<a<<" "<<b<<' '<<c;
	while(1)
	{
		if(tn == 3)
		{
			cout<<"! "<<a<<' '<<b<<' '<<c<<endl;	
			return ;
		}
		else
		{
			cout<<"? "<<a<<' '<<b<<' '<<c<<endl;
		}
		int t;cin>>t;
		if(t == -1) return;
		if(t == 0) 
		{
			cout<<"! "<<a<<' '<<b<<' '<<c<<endl;
			return ;
		}
		else
		{
            int tt = rand()%3;
            if(tt == 0) a = t;
            else if(tt == 1) b = t;
            else c = t;
            tn--;
		}
	}
}
int main()
{
    
    cin.tie(nullptr)->sync_with_stdio(false);
    srand(time(nullptr));
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}