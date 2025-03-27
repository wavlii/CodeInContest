#include<bits/stdc++.h>
using namespace std;
const long long linf = ((unsigned long long)1<<63)-1;
const int inf = ((unsigned int)1<<31)-1;
const int mod=998244353;

// manacher板子,3.27补

void solve()
{
    string ts;cin>>ts;
    int len = ts.size()*2+1;
    vector<char> s(len+1);s[0] = '$';s[len] = '#';
    for(int i = 0;i<len/2;i++)
    {
        s[(i+1)*2] = ts[i];
        s[(i+1)*2-1] = '#';
    }
    vector<int> d(len+1);d[1] = 1;
    int p = -1;
    for(int i = 2,l,r = 1;i<=len;i++)
    {
        if(i<=r) d[i] = min(d[r-i+l],r-i+1);
        while(i-d[i]>=1&&i+d[i]<=len&&s[i-d[i]] == s[i+d[i]]) d[i]++;
        if(i+d[i]-1>=len)
        {
            p = i;
            break;
        }
        if(r<i+d[i]-1) r = i+d[i]-1,l = i-d[i]+1;
    }
    cout<<ts;
    for(int i = p-d[p]+1;i>=1;i--)
    {
        if(s[i] != '#') cout<<s[i];
    }
}
int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
    int T = 1;
    // cin>>T;
    while(T--) solve();
    return 0;
}