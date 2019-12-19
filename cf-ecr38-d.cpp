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

/*map<int,int>level;
ll bfs(ll s,map<int,vector<pair<ll,ll> >p)
{
    queue<ll>q;
    q.push(s);
    level[s]=0;
    while(!q.empty())
    {
        ll u=q.front();
        q.pop();
        for(ll i=0;i<p[u].size();i++)
        {
            ll n=p[u][i];

        }
    }
}*/
int main()
{
    vector<pair<ll,ll> >p(200005);
    ll n,m;
    cin>>n>>m;
    ll a[n+2];
    for(ll i=0;i<m;i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        p[u].pb(mp(v,w));
        p[v].pb(mp(u,w));
    }
    cout<<n<<m;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(ll i=1;i<=n;i++)
    {
        ll q,mq=10000000000000;
        for(ll j=0;j<p[i].size();j++)
        {
            q=2*(p[i][j].second);
            q+=a[p[i][j].first];
            mq=min(q,mq);
        }
        if(a[i]>=mq)
            cout<<mq<<" ";
        else
            cout<<a[i]<<" ";
    }
}
