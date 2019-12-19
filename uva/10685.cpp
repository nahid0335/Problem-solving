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
#define mset(a) memset(a,0,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

int par[5005];
void mkset(ll n)
{
    for(ll i=0;i<n;i++)
        par[i]=i;
}
ll f(ll r)
{
    if(par[r]==r)
        return r;
    return par[r]=f(par[r]);
}
void uni(ll a,ll b)
{
    ll u=f(a);
    ll v=f(b);
    if(u!=v)
        par[u]=v;
}
int main()
{
    ll c,r;
    while((cin>>c>>r)&& c)
    {
        map<string,int>m;
        mkset(c);
        for(ll i=0;i<c;i++)
        {
            string s;
            cin>>s;
            m[s]=i;
        }
        for(ll i=0;i<r;i++)
        {
            string s1,s2;
            cin>>s1>>s2;
            uni(m[s1],m[s2]);
        }
        ll sum=0;
        ll a[5005]={0};
        for(ll i=0;i<c;i++)
        {
            ll r=f(i);
            a[r]++;
        }
        for(int i=0;i<5005;i++)
            sum=max(sum,a[i]);
        cout<<sum<<endl;
    }
}
