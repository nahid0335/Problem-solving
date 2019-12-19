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
    vc(ll)v;
    ll n,s;
    cin>>n>>s;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    st(v);
    ll tmp=v[n/2];
    ll sum=0;
    if(tmp<=s)
    {
        for(ll i=n/2;i<n;i++)
        {
            if(v[i]>=s)
            {
                break;
            }
            sum+=(s-v[i]);
        }
    }
    else
    {
        for(ll i=n/2;i>=0;i--)
        {
            if(v[i]<=s)
            {
                break;
            }
            sum+=(v[i]-s);
        }
    }
    cout<<sum;
}
