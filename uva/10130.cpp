#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<deque>
#include<stack>
#include<list>
#include<bitset>
#include<utility>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<limits.h>
#include<iterator>
#include<functional>
using namespace std;

#define ll long long int
#define du double
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define fi(j,k,n) for(j=k;j<n;j++)
#define fd(j,k,n) for(j=k;j<n;j--)
#define vc(a) vector<a>
#define pb push_back
#define mset(a) memset(a,-1,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))
ll c,n;
ll wg[1002],pc[1002];
ll dp[1005][35];
ll call(ll i,ll w)
{
    if(i==n)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    if(w+wg[i]<=c)
        dp[i][w]=max(pc[i]+call(i+1,w+wg[i]),call(i+1,w));
    else
        dp[i][w]=call(i+1,w);
    return dp[i][w];
}
int main()
{
    read;
    write;
    ll t;
    cin>>t;
    while(t--)
    {
        mset(dp);
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>pc[i]>>wg[i];
        }
        ll g,sum=0;
        cin>>g;
        for(ll i=0;i<g;i++)
        {
            cin>>c;
            sum+=call(0,0);
        }
        cout<<sum<<endl;
    }
}
