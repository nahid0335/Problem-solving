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
int p[100005];
void prime()
{
    v.pb(2);
    for(ll i=4;i<=100005;i+=2)
        p[i]=1;
    for(ll i=3;i<=100005;i+=2)
    {
        if(!p[i])
        {
            v.pb(i);
            for(ll j=i*i;j<=100005;j+=(i*2))
                p[j]=1;
        }
    }
}
int main()
{
    prime();
    ll len=v.size();
    ll a,b,n;
    scanf("%lld %lld %lld",&a,&b,&n);
    ll ans,sum=0;
    for(ll i=a;i<=b;i++)
    {
        ll m=i;
        ans=1;
        for(ll j=0;j<len && v[j]*v[j]<=m;j++)
        {
            ll c=0;
            while(m%v[j]==0)
            {
                c++;
                m/=v[j];
            }
            ans*=c+1;
        }
        if(m>1)
            ans*=2;
        if(ans==n)
            sum++;
    }
    printf("%lld",sum);
}
