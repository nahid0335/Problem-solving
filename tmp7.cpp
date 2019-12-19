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

int main()
{
    ll n;
    cin>>n;
    ll t=1000000008,k;
    vc(ll)v;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
        if(x<t)
        {
            k=i;
            t=x;
        }
    }
    ll sum=t;
    ll c=0;
    for(ll i=k+1,j=k-1;c<n;c++)
    {
        if(c==n-1)
        {
            if(j>=0 && i>=n)
                sum=v[j]-sum;
            else
                sum=v[i]-sum;
        }
        if((v[i]<v[j] && i<n)||j<0)
        {
            sum-=v[i];
            i++;
        }
        else if((v[i]>=v[j] && j>=0)||i>=n)
        {
            sum-=v[j];
            j--;
        }
    }
    cout<<sum;
}
