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
#define mx 2000000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

struct edge
{
    int type,nc,nx;
    bool operator<(const edge& p)const
    {
        return nc>p.nc;
    }
} tmp;
vector<edge>v[5002];
//int par[20];
int vis[3][5002];
int dis[3][5002];
void dijkstra(int t)
{
    for(int i=0; i<5002; i++)
    {
        dis[1][i]=mx;
        dis[2][i]=mx;
        vis[1][i]=0;
        vis[2][i]=0;
    }
    dis[1][t]=0;
    priority_queue<edge>q;
    tmp= {1,0,t};
    q.push(tmp);
    while(!q.empty())
    {
        tmp=q.top();
        q.pop();
        int u=tmp.nx;
        int ut=tmp.type;
        if(!vis[ut][u])
        {
            vis[ut][u]=1;
            int len=v[u].size();
            for(int i=0; i<len; i++)
            {
                ll alt=dis[ut][u]+v[u][i].nc;
                if(alt<dis[1][v[u][i].nx])
                {
                    dis[2][v[u][i].nx]=dis[1][v[u][i].nx];
                    q.push({2,dis[2][v[u][i].nx],v[u][i].nx});

                    dis[1][v[u][i].nx]=alt;
                    //par[v[tmp.nx][i].nx]=tmp.nx;
                    q.push({1,dis[1][v[u][i].nx],v[u][i].nx});
                }
                else if(alt>dis[1][v[u][i].nx] && alt <dis[2][v[u][i].nx])
                {
                    dis[2][v[u][i].nx]=alt;
                    q.push({2,alt,v[u][i].nx});
                }
            }
        }
    }
}
int main()
{
    int n,m,t;
    scanf("%d",&t);
    int z=0;
    while(t--)
    {
        z++;
        printf("Case %d: ",z);
        scanf("%d %d",&n,&m);
        for(int i=0; i<m; i++)
        {
            int x,y,w;
            scanf("%d %d %d",&x,&y,&w);
            tmp= {1,w,y};
            v[x].pb(tmp);
            tmp= {1,w,x};
            v[y].pb(tmp);
        }
        dijkstra(1);
        cout<<dis[2][n]<<endl;
        for(int i=0;i<=n;i++)
            v[i].clear();
    }
    /* for(int i=0; i<=n; i++)
         cout<<dis[1][i]<<" ";*/
}
