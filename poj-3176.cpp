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

int main()
{
    ll n;
    cin>>n;
    vector<int>v[400];
    ll sum=-1;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<=i;j++)
        {
            ll x;
            cin>>x;
            if(j==0)
            {
                if(i==0)
                {
                    v[i].pb(x);
                    //sum+=x;
                   // cout<<v[i].back()<<" ";
                }
                else
                {
                    v[i].pb(v[i-1][j]+x);
                    //sum=max(sum,v[i][j]);
                   // cout<<v[i].back()<<" ";
                }
            }
            else if(j==i)
            {
                v[i].pb(v[i-1][j-1]+x);
                //sum=max(sum,v[i][j]);
               // cout<<v[i].back()<<" ";
            }
            else
            {
                if(v[i-1][j-1]>=v[i-1][j])
                {
                    v[i].pb(v[i-1][j-1]+x);
                   // cout<<v[i].back()<<" ";
                }
                else
                {
                    v[i].pb(v[i-1][j]+x);
                  //  cout<<v[i].back()<<" ";
                }
               // sum=max(sum,v[])
            }
        }
       // cout<<endl;
    }
    ll len=v[n-1].size();
    for(ll i=0;i<len;i++)
        {
            if(sum<v[n-1][i])
                sum=v[n-1][i];
        }
    cout<<sum;
}
