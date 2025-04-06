// Problem: E - Ringo's Favorite Numbers 3
// Contest: AtCoder - AtCoder Beginner Contest 400AtCoder 初学者竞赛 400
// URL: https://atcoder.jp/contests/abc400/tasks/abc400_e
// Memory Limit: 1024 MB
// Time Limit: 2000 ms

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
//欧拉筛
std::vector<int> minp, primes;

void sieve(int n) {
    minp.assign(n + 1, 0);primes.clear();
	minp[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (minp[i] == 0) {
            minp[i] = i;
            primes.push_back(i);
        }

        for (auto p : primes) {
            if (i * p > n) break;
            minp[i * p] = p;
            
            if (p == minp[i]) break;
        }
    }
}


void solve()
{
	long long n;cin>>n;
	n = sqrt(n);
	while(n>0)
	{
		int tn = n;
		int tp = minp[tn];
		while(tn%tp==0) tn /= tp;
		if(tn==1) {n--;continue;}
		tp = minp[tn];
		while(tn%tp==0) tn /= tp;
		if(tn==1)
		{
			cout<<1LL*n*n<<endl;
			return ;
		}
		n--;
	}
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    sieve(1e6+10);
    cin>>T;
    while(T--) solve();
    return 0;
}