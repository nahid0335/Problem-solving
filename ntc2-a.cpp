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
#define mx 1000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))
#define mod 4294967296

ll t;
int v[78500];
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
    for(int i=3; i<=mx; i+=2)
    {
        if(!chk(i))
        {
            v[++t]=i;
        }
    }
    t++;
    swap(v[1],v[2]);
}
int main()
{
    //read;
    //write;
    prime();
    ll n;
    while(cin>>n && n)
    {
        ll sum=1;
        if(n==1)
        {
            cout<<sum<<endl;
        }
        else
        {
            ll a2=0,a5=0;
            for(ll i=2;i<=n;i*=2)
                a2++;
            for(ll i=5;i<=n;i*=5)
                a5++;
            for(ll i=0;i<a2-a5;i++)
                sum=(sum*2)%10;
            for(ll i=2;i<t && v[i]<=n;i++)
            {
                for(ll j=v[i];j<=n;j*=v[i])
                    sum=(sum*v[i])%10;
            }
            cout<<sum<<endl;
        }
    }
}
