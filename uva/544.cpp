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

int vis[205];
vector<pair<ll,ll> >v[205];
class cmp
{
public:
    bool operator()(pair<int,int> n1,pair<int,int> n2) {
        return n1.second<n2.second;
    }
};
ll mst(ll a,ll b)
{
    ll ma=1000000000;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,cmp>q1;
    pair<ll,ll>p1;
    q1.push(mp(a,(1<<20)));
    while(1)
    {
        p1=q1.top();
       // cout<<p1.second<<endl;
        q1.pop();
        vis[p1.first]=1;
        if(p1.second<ma)
            ma=p1.second;
        if(p1.first==b)
            return ma;
        ll xa=p1.first;
        ll len=v[xa].size();
        for(ll i=0;i<len;i++)
        {
            if(!vis[v[xa][i].first])
            {
                q1.push(mp(v[xa][i].first,v[xa][i].second));
            }
        }

    }
}
int main()
{
    read;
    write;
    map<string,int>m;
    ll n,r,w;
    string p,q;
    ll id=0;
    while(1)
    {
        id++;
        cin>>n>>r;
        if(n==0 && r==0)
        {
            break;
        }
        m.clear();
        for(ll i=0;i<205;i++)
            v[i].clear();
       // v.resize(n);
        ll con=1;
        for(ll i=0;i<r;i++)
        {
            cin>>p>>q>>w;
            if(m[p]==0)
            {
                m[p]=con;
                con++;
                //cout<<m[p]<<"p:"<<con<<endl;
            }
            if(m[q]==0)
            {
                m[q]=con;
                con++;
                //cout<<m[q]<<"q:"<<con<<endl;
            }
            v[m[p]].pb(mp(m[q],w));
            v[m[q]].pb(mp(m[p],w));
        }
       /* for(ll i=0;i<205;i++)
        {
            for(ll j=0;j<v[i].size();j++)
                cout<<v[i][j].first<<" "<<v[i][j].second<<endl;
        }*/
        cin>>p>>q;
        ll a=m[p];
        ll b=m[q];
        mset(vis);
        cout<<"Scenario #"<<id<<endl;
        cout<<mst(a,b)<<" tons"<<endl<<endl;
    }
   // cin>>n;
}
