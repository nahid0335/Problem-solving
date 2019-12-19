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

ll nod(ll n)
{
    ll ans=0;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
            ans+=2;
    }
    ll s=sqrt(n);
    if(s*s==n)
        ans--;
    ans--;
    return ans;
}
ll phi(ll n)
{
    ll ans=n;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            while(n%i==0)
                n/=i;
            ans-=ans/i;
        }
    }
    if(n>1)
        ans-=ans/n;
    return ans;
}
int main()
{
    read;
    write;
    ll n;
    while(cin>>n)
    {
        ll p=phi(n);
        ll m=nod(n);
        cout<<n-p-m<<endl;
    }
}
