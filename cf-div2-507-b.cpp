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
    ll n,k;
    cin>>n>>k;
    vc(int)v;
    ll a=2*k+1;
    ll b=k+1;
    ll t=n/a;
    ll m=n%a;
    ll sum=0;
    if(n%a==0)
    {
        ll c=0;
        for(int i=b;c<t;i+=a,c++)
            v.pb(i);
        sum=t;
    }
    else
    {
        if(m<b)
        {
            ll c=0;
            for(int i=m;c<=t;i+=a,c++)
            {
                v.pb(i);
            }
            sum=t+1;
        }
        else
        {
            ll c=0;
            for(int i=b;c<=t;i+=a,c++)
            {
                v.pb(i);
            }
            sum=t+1;
        }
    }
    cout<<sum<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
}
