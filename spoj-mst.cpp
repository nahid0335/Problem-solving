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

struct edge{
    ll node,cost;
    bool operator<(const edge& p)const
    {
        return cost>p.cost;
    }
}tmp;
vc(edge)v[10005];
bool vis[10005];
ll mst()
{
    priority_queue<edge,vector<edge> >q;
    tmp={1,0};
    q.push(tmp);
    vis[1]=1;
    ll sum=0;
    while(!q.empty())
    {
        ll p=q.top().node;
        tmp=q.top();
        q.pop();
        ll len=v[p].size();
        for(ll i=0;i<len;i++)
        {
            if(!vis[v[p][i].node])
                q.push(v[p][i]);
        }
        if(!vis[p])
        {
            vis[p]=1;
            sum+=tmp.cost;
        }
    }
    return sum;
}
int main()
{
    ll n,e;
    cin>>n>>e;
    for(ll i=0;i<e;i++)
    {
        ll x,y,w;
        cin>>x>>y>>w;
        tmp={y,w};
        v[x].pb(tmp);
        tmp={x,w};
        v[y].pb(tmp);
    }
    ll sum=mst();
    cout<<sum;
}
