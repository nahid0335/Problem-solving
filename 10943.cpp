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
#define mset(a) memset(a,0,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 1000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

ll dp[300][300];
void pre()
{
    dp[0][0]=1;
    for(ll i=1;i<300;i++)
    {
        dp[i][0]=1;
        for(ll j=1;j<=i;j++)
        {
            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mx;
        }
    }
}
int main()
{
   // read;
   // write;
   pre();
    ll n,k;
    while(cin>>n>>k)
    {
        if(n==0 && k==0)
            break;
        cout<<dp[n+k-1][k-1]<<endl;
    }
}
