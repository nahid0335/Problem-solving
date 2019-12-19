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

struct edge
{
    int nx,ny,nc;
    bool operator<(const edge & p)const
    {
        return nc<p.nc;
    }
} tmp;

vector<edge>v;
vc(int)vp;
int par[105];
int f(int r)
{
    if(par[r]==r)
        return r;
    return par[r]=f(par[r]);
}
edge mst(int fi,int n)
{
    for(int i=0; i<=n; i++)
        par[i]=i;
    int con=0,sum=0;
    int len=v.size();
    for(int i=0; i<len && con<n; i++)
    {
        if(i!=fi)
        {
            int a=f(v[i].nx);
            int b=f(v[i].ny);
            if(a!=b)
            {
                par[a]=b;
                sum+=v[i].nc;
                con++;
                vp.pb(i);
            }
        }
    }
    tmp= {sum,con,0};
    return tmp;
}
int main()
{
     read;
      write;
    ll t;
    cin>>t;
    ll z=0;
    while(t--)
    {
        z++;
        cout<<"Case #"<<z<<" : ";
        ll e,n,m=0;
        cin>>n>>e;
        for(ll i=0; i<e; i++)
        {
            ll x,y,w;
            cin>>x>>y>>w;
            tmp= {x,y,w};
            v.pb(tmp);
        }
        st(v);
        tmp=mst(500,n);
        ll num=tmp.ny;
        //   cout<<num<<endl;
        vc(int)vec;
        vec.pb(tmp.nx);
        int len=vp.size();
        if(num!=n-1)
        {
            cout<<"No way"<<endl;
        }
        else
        {
            for(int j=0; j<len; j++)
            {
                tmp=mst(vp[j],n);
                if(tmp.ny==n-1)
                {
                    vec.pb(tmp.nx);
                }
            }

            st(vec);
           /* cout<<"result:"<<endl;
            for(int i=0; i<vec.size(); i++)
                cout<<vec[i]<<",";
            cout<<endl;*/
            if(vec.size()==1)
            {
                cout<<"No second way"<<endl;
            }
            else
            {
                cout<<vec[1]<<endl;
            }
        }
        v.clear();
        vec.clear();
        vp.clear();
    }
}
