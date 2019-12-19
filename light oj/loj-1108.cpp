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
#define mx 10000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

struct edge{
    int nx,ny,nw;
}tmp;
vc(edge)v;
int dis[1005],vis[1005];
vc(int)vp;
vector<int>g[1005];

void dfs(int u)
{
    vis[u]=1;
    vp.pb(u);
    int len=g[u].size();
    for(int i=0;i<len;i++)
    {
        if(!vis[g[u][i]])
            dfs(g[u][i]);
    }
}
bool bellman(int n,int m)
{
    for(int i=0;i<=n;i++)
    {
        dis[i]=mx;
        vis[i]=0;
    }
    dis[0]=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x=v[j].nx;
            int y=v[j].ny;
            int w=v[j].nw;
            if(dis[x]+w<dis[y])
                dis[y]=dis[x]+w;
        }
    }
    bool np=0;
    //vp.pb(0);
    //vis[0]=1;
    for(int i=0;i<m;i++)
    {
            int x=v[i].nx;
            int y=v[i].ny;
            int w=v[i].nw;
        if(dis[x]+w<dis[y])
        {
            np=1;
            dis[y]=dis[x]+w;
            if(!vis[x])
                dfs(x);
        }
    }
    return np;
}
int main()
{
    int t;
    scanf("%d",&t);
    int z=0;
    while(t--)
    {
        z++;
        printf("Case %d:",z);
        int n,m;
        scanf("%d %d",&n,&m);
        for(int i=0;i<m;i++)
        {
            int x,y,w;
            scanf("%d %d %d",&x,&y,&w);
            tmp={y,x,w};
            v.pb(tmp);
            g[y].pb(x);
        }
        bool f=bellman(n,m);
        if(f)
        {
            st(vp);
            int len=vp.size();
            for(int i=0;i<len;i++)
                printf(" %d",vp[i]);
            printf("\n");
        }
        else
        {
            printf(" impossible\n");
        }
        v.clear();
        vp.clear();
        for(int i=0;i<n;i++)
            g[i].clear();
    }
}
