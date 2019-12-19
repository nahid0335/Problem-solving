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
#define mset(a) memset(a,-1,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))
struct edge
{
    ll nx,nc;
    bool operator<(const edge& p)const
    {
        return nc>p.nc;
    }
} tmp;
/*void dijkstra(int n,)
{

}*/
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<edge>v[n+1];
    int s[n+1];
    ll dis[n+1];
    for(int i=0; i<m; i++)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        if(x!=y)
        {
            tmp= {y,w};
            v[x].pb(tmp);
            tmp= {x,w};
            v[y].pb(tmp);
        }
    }
    //dijkstra(n);
    priority_queue<edge>q;
    for(ll i=0;i<=n;i++)
        dis[i]=-1;
    tmp= {1,0};
    q.push(tmp);
    dis[1]=0;
    while(!q.empty())
    {
        tmp=q.top();
        q.pop();
        ll a=tmp.nx;
        ll len=v[a].size();
        for(ll i=0; i<len; i++)
        {
            ll p=v[a][i].nx;
            ll w=v[a][i].nc;
            if(dis[p]==-1||dis[p]>w+dis[a])
            {
                dis[p]=dis[a]+w;
                s[p]=a;
                q.push({p,w});
            }
        }
    }
  /*  for(int i=0;i<=n;i++)
        cout<<s[i]<<" ";*/
    if(dis[n]==-1)
    {
        cout<<"-1";
    }
    else
    {
        stack<int>qt;
        ll x=n;
        while(x!=1)
        {
            qt.push(x);
            x=s[x];
        }
        qt.push(1);
        while(!qt.empty())
        {
            cout<<qt.top()<<" ";
            qt.pop();
        }
    }
}
