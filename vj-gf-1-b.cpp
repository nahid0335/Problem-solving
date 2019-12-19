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

int v[101][101];
int vis[101];
ll m;
void dfs(ll x,ll y)
{
    if(x==y)
        return;
    vis[x]=1;
    for(ll i=0;i<m;i++)
    {
        if(v[x][i] && !vis[i])
            dfs(i,y);
    }
}
void line()
{
    cout<<"+";
    for(ll i=0;i<2*m-1;i++)
        cout<<"-";
    cout<<"+"<<endl;
}
int main()
{
    read;
    write;
    ll test,w=0;
    cin>>test;
    while(test--)
    {
        w++;
        cout<<"Case "<<w<<":"<<endl;
        cin>>m;
        mset(v);
        for(ll i=0;i<m;i++)
        {
            for(ll j=0;j<m;j++)
            {
                ll x;
                cin>>x;
                v[i][j]=x;
            }
        }
        int conv[101];
        int opt[101][101];
        mset(vis);
        dfs(0,-1);
        for(ll i=0;i<101;i++)
        {
            conv[i]=vis[i];
        }
        for(ll i=0;i<m;i++)
        {
            mset(vis);
            dfs(0,i);
            for(ll j=0;j<m;j++)
            {
                if(conv[j] && !vis[j])
                    opt[i][j]=1;
                else
                    opt[i][j]=0;
            }
        }
        line();
        for(ll i=0;i<m;i++)
        {
            cout<<"|";
            for(ll j=0;j<m;j++)
            {
                if(opt[i][j])
                {
                    cout<<"Y|";
                }
                else
                    cout<<"N|";
            }
            cout<<endl;
            line();
        }
    }
}
