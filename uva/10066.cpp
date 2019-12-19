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
ll a,b;
int dp[101][101];
int vis[101][101];
vc(int)v1,v2;
int lcs(int i,int j)
{
    if(i==a || j==b)
        return 0;
    if(vis[i][j])
        return dp[i][j];
    int ans=0;
    if(v1[i]==v2[j])
    {
        ans=1+lcs(i+1,j+1);
    }
    else
    {
        int n=lcs(i+1,j);
        int m=lcs(i,j+1);
        ans=max(n,m);
    }
    vis[i][j]=1;
    dp[i][j]=ans;
    return dp[i][j];
}
int main()
{
    int k=0;
    while(cin>>a>>b && a && b)
    {
        k++;
        for(int i=0;i<a;i++)
        {
            int x;
            cin>>x;
            v1.pb(x);
        }
        for(int i=0;i<b;i++)
        {
            int x;
            cin>>x;
            v2.pb(x);
        }
        for(int i=0;i<=100;i++)
        {
            for(int j=0;j<101;j++)
            {
                dp[i][j]=0;
                vis[i][j]=0;
            }
        }
        int sum=lcs(0,0);
        cout<<"Twin Towers #"<<k<<endl;
        cout<<"Number of Tiles : "<<sum<<endl<<endl;
        v1.clear();
        v2.clear();
    }
}
