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
ll par[100005];
ll ab[100005];
ll f(ll r)
{
    if(par[r]==r)
        return r;
    return par[r]=f(par[r]);
}
void uni(ll c,ll b)
{
    ll x=f(c);
    ll y=f(b);
    if(x!=y)
    {
        par[x]=y;
        ab[y]+=ab[x];
        cout<<ab[y]<<endl;
    }
    else
        cout<<ab[y]<<endl;
}
int main()
{
    read;
    write;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        map<string,ll>m;
        ll c=1,sum=0;
        for(ll i=0;i<n;i++)
        {
            string s1,s2;
            cin>>s1>>s2;
            if(!m[s1])
            {
                m[s1]=c;
                par[c]=c;
                ab[c]=1;
                c++;
            }
            if(!m[s2])
            {
                m[s2]=c;
                par[c]=c;
                ab[c]=1;
                c++;
            }
            uni(m[s1],m[s2]);
        }
    }
}
