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
#define mset(a) memset(a,-1,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))
ll par[100];
ll f(ll a)
{
    if(par[a]==a)
        return a;
    return par[a]=f(par[a]);
}
void uni(ll a,ll b)
{
    ll u=f(a);
  //  cout<<u<<endl;
    ll v=f(b);
    if(v!=u)
    {
        par[u]=v;
    }
}
void mkset(ll n)
{
    for(ll i=0;i<n;i++)
        par[i]=i;
}
int main()
{
    read;
    write;
    ll t;
    cin>>t;
            string s;
    bool tp=0;
    getline(cin,s);
    getline(cin,s);
    while(t--)
    {
        if(tp)
            cout<<endl;
        tp=1;
        getline(cin,s);
        ll n=s[0]-'A';
        n++;
        mkset(n);
     //   cout<<c<<endl;
        while(getline(cin,s)&& s.size()>0)
        {
            ll x,y;
            x=s[0]-'A';
            y=s[1]-'A';
           // cout<<x<<" "<<y<<endl;
            uni(x,y);
           // cout<<x<<" "<<y<<endl;
        }
        ll sum=0;
        map<ll,bool>m;
        for(ll i=0;i<n;i++)
        {
            ll r=f(i);
            if(!m[r])
            {
                m[r]=1;
                sum++;
            }
        }
        cout<<sum<<endl;
    }
}
