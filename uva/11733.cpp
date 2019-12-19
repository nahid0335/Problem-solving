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
int par[10005];
//int ab[100005];
struct edge{
    ll nx,ny,nc;
    bool operator<(const edge& p)const
    {
        return nc<p.nc;
    }
}tmp;
vector<edge>v;
ll f(ll r)
{
    if(par[r]==r)
        return r;
    return par[r]=f(par[r]);
}

edge mst(ll n,ll a)
{
    st(v);
    for(ll i=1;i<=n;i++)
    {
        par[i]=i;
    }
    ll con=0,sum=0,air=n;
    ll len=v.size();
    for(ll i=0;i<len;i++)
    {
        ll u=f(v[i].nx);
        ll w=f(v[i].ny);
        if(v[i].nc>=a)
            break;
        if(w!=u)
        {
            par[u]=w;
            con++;
            air--;
            sum+=v[i].nc;
            if(con==n-1)
                break;
        }
    }
    tmp={sum,air,0};
    return tmp;
}
int main()
{
    read;
    write;
    ll t;
    cin>>t;
    ll k=0;
    while(t--)
    {
        k++;
        cout<<"Case #"<<k<<": ";
        ll n,e,a;
        cin>>n>>e>>a;
        for(ll i=0;i<e;i++)
        {
            ll x,y,w;
            cin>>x>>y>>w;
            tmp={x,y,w};
            v.pb(tmp);
        }
        tmp=mst(n,a);
        cout<<tmp.nx+tmp.ny*a<<" "<<tmp.ny<<endl;
        v.clear();

    }
}
