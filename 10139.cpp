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

#define ll unsigned long long int
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
#define N 100000

bool a[N];
ll p[N],y=0;
void prime()
{
    a[2]=1;
    for(ll i=3;i<N;i+=2)
        a[i]=1;
    for(ll i=3;i*i<=N;i+=2)
    {
        if(a[i])
        {
            for(ll j=i*i;j<N;j+=(2*i))
                a[j]=0;
        }
    }
    for(ll i=0;i<N;i++)
    {
        if(a[i])
            p[y++]=i;
    }
}
bool cheak(ll n, ll m)
{
    ll cn=0,cm=0;
    for(ll i=0;i<y && p[i]*p[i]<=m;i++)
    {
        if(m%p[i]==0)
        {
            cm=0;
            while(m%p[i]==0)
            {
                cm++;
                m/=p[i];
            }
            ll t=p[i];
            cn=0;
            while(t<=n)
            {
                cn+=n/t;
                t*=p[i];
            }
            if(cn<cm)
                return 0;
        }
    }
    if(m!=1)
    {
        if(n<m)
            return 0;
    }
    return 1;
}
int main()
{
   // read;
   // write;
    prime();
    ll n,m;
    while(cin>>n>>m)
    {
        if(cheak(n,m))
        {
            cout<<m<<" divides "<<n<<"!"<<endl;
        }
        else
            cout<<m<<" does not divide "<<n<<"!"<<endl;
    }
    return 0;
}
