// Problem: E. Interesting Ratio
// Contest: Codeforces - Codeforces Round 1013 (Div. 3)
// URL: https://codeforces.com/contest/2091/problem/E
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
std::vector<int> minp, primes;

void sieve(int n) {
    minp.assign(n + 1, 0);primes.clear();

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
	int n;cin>>n;
	long long ans = 0;
	for(int i = 1;i<=n;i++)
	{
		
		ans += upper_bound(primes.begin(),primes.end(),n/i)-primes.begin();
	}
	cout<<ans<<'\n';
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    sieve(1e7+10);
    int T = 1;
    cin>>T;
    while(T--) solve();
    return 0;
}