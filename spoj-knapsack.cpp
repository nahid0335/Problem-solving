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
#define mset(a) memset(a,-1,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

int v[2005],c[2005],dp[2005][2005];

int knapsack(int n,int w)
{
    if(dp[n][w]!=-1)
        return dp[n][w];
    if(n==0||w==0)
        return 0;
    else if(v[n-1]>w)
        return dp[n][w]=knapsack(n-1,w);
    else
        return dp[n][w]=max(knapsack(n-1,w),(c[n-1]+knapsack(n-1,w-v[n-1])));
}
int main()
{
    ll s,n;
    mset(dp);
    cin>>s>>n;
    for(int i=0;i<n;i++)
    {
        cin>>v[i]>>c[i];
    }
    cout<<knapsack(n,s)<<endl;
   /* for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }*/
}
