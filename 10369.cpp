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
int par[600];
struct edge{
    ll nx,ny;
    du d;
    bool operator<(const edge& p)const
    {
        return d<p.d;
    }
}tmp;
vector<edge>v;
ll f(ll r)
{
    if(par[r]==r)
        return r;
    return par[r]=f(par[r]);
}
du mst(ll n,ll c)
{
    st(v);
    for(int i=0;i<=n;i++)
    {
        par[i]=i;
    }
    du sum=0;
    ll len=v.size();
    ll con=0;
    for(int i=0;i<len && con<c;i++)
    {
        ll a=f(v[i].nx);
        ll b=f(v[i].ny);
        if(a!=b)
        {
            par[a]=b;
            sum=v[i].d;
            con++;
        }
    }
    return sum;
}
int main()
{
    read;
    write;
    ll t;
    cin>>t;
    while(t--)
    {
        ll s,p;
        cin>>s>>p;
        vector<pair<int,int> >u;
        for(int i=0;i<p;i++)
        {
            ll x,y;
            cin>>x>>y;
            u.pb(mp(x,y));
        }
        du d;
        for(int i=0;i<p-1;i++)
        {
            for(int j=i+1;j<p;j++)
            {
                ll x=abs(u[i].first-u[j].first);
                ll y=abs(u[i].second-u[j].second);
                d=sqrtl(x*x+y*y);
                tmp={i,j,d};
                v.pb(tmp);
            }
        }
        du sum=mst(p,p-s);
        cout<<fixed<<setprecision(2)<<sum<<endl;
        v.clear();
        u.clear();
    }
}
