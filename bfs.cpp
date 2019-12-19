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

bool visited[100];
vector<int>con[100];
void bfs(ll s,ll m)
{
    queue<int>q;
    q.push(s);
    visited[s]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(ll i=0;i<con[u].size();i++)
        {
            if(visited[con[u][i]]==false)
            {
                int v=con[u][i];
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
int main()
{
    ll n,m,x,y;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        cin>>x>>y;
        con[x].pb(y);
        con[y].pb(x);
    }
    bfs(1,m);
}
