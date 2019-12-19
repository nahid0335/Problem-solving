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
#include<iomanip>
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
#define mset(a) memset(a,0,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

ll dp[250][250];
ll a[250][250],k;
ll monkey(ll i,ll j)
{
    if(a[i][j]==0)
        return 0;
    if(i==k-1)
        return a[i][j];
    if(dp[i][j]!=-1)
        return dp[i][j];
    dp[i][j]=max(a[i][j]+monkey(i+1,j),a[i][j]+monkey(i+1,j+1));
    return dp[i][j];
}

int main()
{
    int t,n;
    scanf("%d",&t);
    for(int ts=1;ts<t;ts++)
    {
        scanf("%lld",&n);
        memset(dp,-1,sizeof(dp));
        mset(a);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
                scanf("%lld",&a[i][j]);
        }
        k=2*n-1;
        for(int i=n,p=1;i<k;i++,p++)
        {
            for(int j=p;j<n;j++)
                scanf("%lld",&a[i][j]);
        }
        printf("Case %d: %lld\n",ts,monkey(0,0));
    }
}
