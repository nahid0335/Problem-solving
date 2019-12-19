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
#define mx 1000000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))
struct edge
{
    int nx,ny,nw;
}tmp;
vector<edge>v;
int dis[205];
void bellman(int n,int m)
{
    for(int i=0;i<=n;i++)
    {
        dis[i]=mx;
    }
    dis[1]=0;
    for(int i=0;i<2*n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x=v[j].nx;
            int y=v[j].ny;
            int w=v[j].nw;
            if(dis[x]+w<dis[y] && dis[x]!=mx)
                dis[y]=dis[x]+w;
        }
    }
    for(int i=0;i<m;i++)
    {
        int x=v[i].nx;
        int y=v[i].ny;
        int w=v[i].nw;
        if(dis[y]>dis[x]+w && dis[x]!=mx)
            dis[y]=-mx;
    }
}

int main()
{
    read;
    write;
    int n,k=0;
    while(cin>>n)
    {
        k++;
        for(int i=1;i<=n;i++)
        {
            cin>>dis[i];
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int x,y;
            cin>>x>>y;
            int w=(dis[y]-dis[x])*(dis[y]-dis[x])*(dis[y]-dis[x]);
            tmp={x,y,w};
            v.pb(tmp);
        }
        bellman(n,m);
        int e;
        cin>>e;
        cout<<"Set #"<<k<<endl;
        for(int i=0;i<e;i++)
        {
            int u;
            cin>>u;
            if(dis[u]<3||dis[u]==mx)
                cout<<"?"<<endl;
            else
                cout<<dis[u]<<endl;
        }
        v.clear();
    }
}
