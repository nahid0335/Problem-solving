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
#define INT_M 1<<30

struct edge
{
    int nx,nw,mode;
    bool operator<(const edge& p)const
    {
        if(nw==p.nw)
            return mode>p.mode;
        return nw>p.nw;
    }
}tmp;

vector<edge>v[10001];
int dis[10001][11];
void dijkstra(int n,int d)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<11;j++)
            dis[i][j]=INT_M;
    }
    priority_queue<edge>q;
    dis[0][0]=0;
    tmp={0,0,0};
    q.push(tmp);
    while(!q.empty())
    {
        tmp=q.top();
        q.pop();
        int u=tmp.nx;
        int w=tmp.nw;
        int f=tmp.mode;
        if(dis[u][f]>=w)
        {
            int len=v[u].size();
            for(int i=0;i<len;i++)
            {
                int uv=v[u][i].nx;
                int wv=v[u][i].nw;
                int fv=v[u][i].mode;
                if(f+fv<=d)
                {
                    if(dis[uv][f+fv]>dis[u][f]+wv)
                    {
                        dis[uv][f+fv]=dis[u][f]+wv;
                        tmp={uv,dis[uv][f+fv],f+fv};
                        q.push(tmp);
                    }
                }
            }
        }
    }
}
int main()
{
    read;
    write;
    int t;
    scanf("%d",&t);
    int z=0;
    while(z<t)
    {
        z++;
        printf("Case %d: ",z);
        int n,m,k,d;
        scanf("%d %d %d %d",&n,&m,&k,&d);
        for(int i=0;i<m;i++)
        {
            int x,y,w;
            scanf("%d %d %d",&x,&y,&w);
            tmp={y,w,0};
            v[x].pb(tmp);
          //  tmp={x,w,0};
          //  v[y].pb(tmp);
        }
        for(int i=0;i<k;i++)
        {
            int x,y,w;
            scanf("%d %d %d",&x,&y,&w);
            tmp={y,w,1};
            v[x].pb(tmp);
         //   tmp={x,w,1};
         //   v[y].pb(tmp);
        }
        dijkstra(n,d);
        int sum=INT_M;
        for(int i=0;i<=d;i++)
            sum=min(sum,dis[n-1][i]);
        if(sum==INT_M)
            printf("Impossible\n");
        else
            printf("%d\n",sum);
        for(int i=0;i<n;i++)
            v[i].clear();
    }

}
