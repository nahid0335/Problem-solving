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

vector<int>vis;
vector<vector<int> >v;
bool dfs(int n)
{
    bool ans=true;
    int len=v[n].size();
    for(int i=0;i<len;i++)
    {
        if(vis[v[n][i]]!=0 && vis[v[n][i]]==vis[n])
            ans=false;
        if(vis[v[n][i]]==0)
        {
            if(vis[n]==1)
                vis[v[n][i]]=2;
            else
                vis[v[n][i]]=1;
            ans=ans & dfs(v[n][i]);
        }
    }
    return ans;
}
int main()
{
    ll n;
    while(cin>>n && n)
    {
        ll m;
        cin>>m;
        v.clear();
        v.resize(n);
        vis.assign(n,0);
        for(ll i=0;i<m;i++)
        {
            ll x,y;
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        vis[0]=1;
        if(dfs(0))
        {
            cout<<"BICOLORABLE."<<endl;
        }
        else
            cout<<"NOT BICOLORABLE."<<endl;
    }
}
