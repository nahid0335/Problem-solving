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
ll dp[22][10004];
ll coin[22];
int main()
{
    read;
    write;
    for(int i=1;i<22;i++)
        coin[i]=i*i*i;
    for(int i=0;i<22;i++)
        dp[i][0]=1;
    for(int i=1;i<22;i++)
    {
        for(int j=0;j<10001;j++)
        {
            if(coin[i]<=j)
                dp[i][j]=dp[i-1][j]+dp[i][j-coin[i]];
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    int n;
    /*for(int i=0;i<21;i++){
        for(int j=0;j<1001;j++)
            cout<<dp[i][j]<<" ";
        cout<<endl;
    }*/

    while(cin>>n)
    {
        cout<<dp[21][n]<<endl;
    }
}
