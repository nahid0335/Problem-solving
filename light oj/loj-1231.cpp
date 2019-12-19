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
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

int am[150],c[100];
int dp[52][1005];
int n,k;
int m=100000007;
int main()
{
    ll t;
    cin>>t;
    ll p=0;
    while(t--)
    {
        p++;
        cout<<"Case "<<p<<": ";
        mset(dp);
        cin>>n>>k;
        for(ll i=0;i<n;i++)
            cin>>am[i];
        for(ll i=0;i<n;i++)
            cin>>c[i];
        dp[n][k]=1;
        for(int i=n-1;i>=0;i--)
        {
            for(int cur=0;cur<=k;cur++)
            {
                int b=0;
                for(int j=0;j<=c[i];j++)
                {
                    if(cur+b<=k)
                    {
                        dp[i][cur]=(dp[i][cur]+dp[i+1][cur+b])%m;
                    }
                    b+=am[i];
                }
            }
        }
        cout<<dp[0][0]<<endl;
    }
}
