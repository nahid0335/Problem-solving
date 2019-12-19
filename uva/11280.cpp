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

struct edge
{
    int nx,ny,nw;
    bool operator<(edge& p)const
    {
        if(ny!=p.ny)
            return ny>p.ny;
        return nx>p.nx;
    }
}tmp;
vc(edge)v;
int dis[105];
int cost[105];

void bellman(int n,int m)
{
    for(int i=0;i<=n;i++)
    {
        dis[i]=mx;
        cost[i]=0;
    }
    dis[1]=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            int x=v[j].nx;
            int y=v[j].ny;
            int w=v[j].nw;
            if(dis[y]>dis[x]+w)
                dis[y]=dis[x]+w;
        }
        cost[i]=dis[n];
    }
}
int main()
{
    read;
    write;
    int t;
    cin>>t;
    int z=0;
    while(t--)
    {
        z++;
        if(z!=1)
            cout<<endl;
        cout<<"Scenario #"<<z<<endl;
        int n;
        cin>>n;
        map<string,int>ct;
        for(int i=1;i<=n;i++)
        {
            string s;
            cin>>s;
            ct[s]=i;
        }
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            string s1,s2;
            int w;
            cin>>s1>>s2>>w;
            tmp={ct[s1],ct[s2],w};
            v.pb(tmp);
        }
        st(v);
      /*  for(int i=0;i<m;i++)
            cout<<v[i].nx<<" "<<v[i].ny<<" "<<v[i].nw<<endl;*/
        bellman(n,m);
        int e;
        cin>>e;
        for(int i=0;i<e;i++)
        {
            int x;
            cin>>x;
            if(x>=n-1)
                x=n-2;
            if(cost[x]==mx)
                cout<<"No satisfactory flights"<<endl;
            else
                cout<<"Total cost of flight(s) is $"<<cost[x]<<endl;
        }
        v.clear();
        ct.clear();
    }
}
