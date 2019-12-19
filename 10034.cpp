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
#include<iomanip>
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

vector<pair<ll,du> >v[10000];
int vis[200];
class cmp
{
public:
    bool operator()(pair<ll,du> n1,pair<ll,du> n2) {
        return n1.second>n2.second;
    }
};
du mst()
{
    du sum=0.0;
    mset(vis);
    priority_queue<pair<ll,du>,vector<pair<ll,du> >,cmp>q;
    q.push(mp(1,0));
    //vis[1]=1;
    while(!q.empty())
    {
        pair<ll,du>p;
        p=q.top();
        q.pop();
        ll len=v[p.first].size();
        for(ll i=0;i<len;i++)
        {
            if(!vis[v[p.first][i].first])
            {
                q.push(mp(v[p.first][i].first,v[p.first][i].second));
            }
        }
        if(!vis[p.first])
        {
            vis[p.first]=1;
            sum+=p.second;
        }
    }
    return sum;
}
int main()
{
    read;
    write;
    ll t;
    cin>>t;
    ll f=0;
    while(t--)
    {
        if(f)
            cout<<endl;
        f++;
        ll n;
        cin>>n;
        vector<pair<du,du> >vp;
        for(ll i=0;i<n;i++)
        {
            du x,y;
            cin>>x>>y;
            vp.pb(mp(x,y));
        }
        map<pair<du,du>,ll>m;
        for(ll i=0;i<10000;i++)
            v[i].clear();
        ll c=1;
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(!m[vp[i]])
                {
                    m[vp[i]]=c;
                    c++;
                    //cout<<vp[i].first<<" "<<vp[i].second<<" "<<m[vp[i]]<<endl;
                }
                if(!m[vp[j]])
                {
                    m[vp[j]]=c;
                    c++;
                    //cout<<vp[j].first<< " "<<vp[j].second<<" "<<m[vp[j]]<<endl;
                }
              //  cout<<vp[j].first<<" "<<vp[j].second<<" "<<m[vp[i]]<<endl;
                du d=sqrt((vp[i].first-vp[j].first)*(vp[i].first-vp[j].first)+(vp[i].second-vp[j].second)*(vp[i].second-vp[j].second));
                v[m[vp[i]]].pb(mp(m[vp[j]],d));
                v[m[vp[j]]].pb(mp(m[vp[i]],d));
            }
        }
       /* for(ll i=0;i<10000;i++)
        {
            for(ll j=0;j<v[i].size();j++)
                cout<<v[i][j].first<<" "<<v[i][j].second<<endl;
        }*/
        cout<<fixed<<setprecision(2)<<mst()<<endl;
    }
}
