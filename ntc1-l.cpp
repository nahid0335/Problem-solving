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

#define ll unsigned
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
#define mod 4294967296

ll t;
int v[5761489];
unsigned int sv[5761489];
int p[(mx/64)+2];
void prime()
{
    p[0]|=0;
    for(int i=3; i*i<=mx; i+=2)
    {
        if(!chk(i))
        {
            for(ll j=i*i; j<=mx; j+=(i<<1))
                sset(j);
        }
    }
    v[0]=2;
    sv[0]=2;
    for(int i=3; i<=mx; i+=2)
    {
        if(!chk(i))
        {
            v[++t]=i;
            sv[t]=(sv[t-1]*i);
        }
    }
    t++;
}
int main()
{
    read;
    write;
    prime();
    ll n;
    cin>>n;
    ll z=0;
    while(z<n)
    {
        z++;
        ll m;
        cin>>m;
        ll x=m;
        unsigned sum=1;
        ll low;
        for(ll i=0;i<t && v[i]*v[i]<=m;i++)
        {
            ll tmp=m;
            tmp/=v[i];
                while(tmp>=v[i])
                {
                    tmp/=v[i];
                    sum*=v[i];
                }
        }
        low=upper_bound(v,v+t,x)-v;
        low--;
        sum*=sv[low];
        cout<<"Case "<<z<<": "<<sum<<endl;
    }
}
