#include<cstdio>
#include<iomanip>
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

ll r,c;
int vis[1001][1001];
int level[1001][1001];
void bfs(ll x1,ll y1,ll x2,ll y2)
{
    int dx[]={1,-1,0,0};
    int dy[]={0,0,1,-1};
    vis[x1][y1]=1;
    ll f=0;
    queue<pair<ll,ll> >q;
    q.push(mp(x1,y1));
    while(!q.empty())
    {
        pair<ll,ll>t;
        t=q.front();
        q.pop();
        ll x,y;
        for(ll i=0;i<4;i++)
        {
             x=t.first+dx[i];
             y=t.second+dy[i];
            if(x>=0 && x<r &&y>=0 && y<c && !vis[x][y])
            {
                vis[x][y]=1;
                level[x][y]=level[t.first][t.second]+1;
                q.push(mp(x,y));
                if(x==x2 && y==y2)
                {
                    f=1;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<level[x][y]<<endl;
            return;
        }
    }
    cout<<"-1"<<endl;
}
int main()
{
    read;
    write;
    while(cin>>r>>c && r)
    {
        memset(vis,0,sizeof(vis));
        memset(level,0,sizeof(level));
        ll g;
        cin>>g;
        while(g--)
        {
            ll r1,t,c1;
            cin>>r1>>t;
            while(t--)
            {
                cin>>c1;
                vis[r1][c1]=1;
            }
        }
        ll x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        bfs(x1,y1,x2,y2);

    }
}
