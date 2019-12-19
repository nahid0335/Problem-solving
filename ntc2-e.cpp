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
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

vc(int)v;
int p[(mx/64)+2];
void prime()
{
    p[0]|=0;
    for(ll i=3;i*i<=mx;i+=2)
    {
        if(!chk(i))
        {
            for(ll j=i*i;j<=mx;j+=(j<<1))
                sset(j);
        }
    }
    v.pb(2);
    for(ll i=3;i<=mx;i+=2)
    {
        if(!chk(i))
            v.pb(i);
    }
}
int main()
{
    prime();
    ll n;
    ll len=v.size();
    while((scanf("%lld",&n)==1) && n)
    {
        for(ll i=0;i<len && v[i]*v[i]<=n;i++)
        {
            ll c=0;
            while(n%v[i]==0)
            {
                n/=v[i];
                c++;
            }
            if(c>0)
                printf("%d^%lld ",v[i],c);
        }
        if(n>1)
            printf("%lld^1 ",n);
        printf("\n");
    }
}
