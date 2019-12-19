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
#include<iomanip>
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

vector<vector<int> >v;
int vis[21];
int bfs(int n,int m)
{
    queue<int>q;
    q.push(n);
    memset(vis,-1,sizeof(vis));
    vis[n]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        int len=v[u].size();
        for(int i=0;i<len;i++)
        {
            int p=v[u][i];
            if(vis[p]==-1)
            {
                vis[p]=vis[u]+1;
                q.push(p);
            }
            if(vis[m]!=-1)
                break;
        }
        if(vis[m]!=-1)
            break;
    }
    return vis[m];
}
int main()
{
    read;
    write;
    ll t=1;
    ll n,m;
    while(cin>>n)
    {
        v.clear();
        v.resize(21);
      //  vis.assign(21,0);
        for(ll i=0;i<n;i++)
        {
            cin>>m;
            v[1].pb(m);
            v[m].pb(1);
        }
        for(ll i=2;i<20;i++)
        {
            cin>>n;
            for(ll j=0;j<n;j++)
            {
                cin>>m;
                v[i].pb(m);
                v[m].pb(i);
            }
        }
        cin>>n;
        cout<<"Test Set #"<<t++<<endl;
        for(ll i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            ll ans=bfs(x,y);
            cout<<setw(2)<<x<<" to "<<setw(2)<<y<<": "<<ans<<endl;
        }
        cout<<endl;
    }
}
