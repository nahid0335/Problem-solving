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

ll ans=0;
int vis[200005];
vc(int)v[200005];
void bfs(ll n)
{
    ll f=1;
    vis[n]=1;
    queue<ll>q;
    q.push(n);
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        ll len=v[u].size();
        if(len==2 && f)
        {
            f=1;
            for(ll i=0;i<len;i++)
            {
                ll p=v[u][i];
                if(!vis[p])
                {
                    vis[p]=1;
                    q.push(p);
                }
            }
        }
        else
        {
            f=0;
            for(ll i=0;i<len;i++)
            {
                ll p=v[u][i];
                if(!vis[p])
                {
                    vis[p]=1;
                    q.push(p);
                }
            }
        }
    }
    if(f)
        ans++;
}
int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll x,y;
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
    for(ll i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            bfs(i);
        }
    }
    cout<<ans;
}
