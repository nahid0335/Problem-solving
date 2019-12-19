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
ll cas;
map<int,int> visited;
void bfs(ll s,map<int,vector<int> >v)
{
    queue<int>q;
    q.push(s);
    visited[s]=0;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(ll i=0;i<v[u].size();i++)
        {
            ll n=v[u][i];
            if(!visited.count(n))
            {
                visited[n]=visited[u]+1;
                q.push(n);
            }
        }
    }
}
int main()
{
    ll n,m,x,y;
    while(cin>>n && n)
    {
        map<int,vector<int> >v;
        for(ll i=0;i<n;i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
        ll s,t;
        while(cin>>s>>t)
        {
            if(s==0 && t==0)
            {
                break;
            }
            cas++;
            map<int,int>::iterator it;
            visited.clear();
            bfs(s,v);
            ll c=0;
            for(it=visited.begin();it!=visited.end();++it)
            {
                if(it->second>t)
                    c++;
            }
            c=c+v.size()-visited.size();
            cout<<"Case "<<cas<<": "<<c<<" nodes not reachable from node "<<s<<" with TTL = "<<t<<"."<<endl;
        }
    }
}

