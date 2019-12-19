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

vector<int>v;
bool p[4006];
void prime()
{
    v.pb(2);
    for(ll i=4; i<=4000; i+=2)
        p[i]=1;
    for(ll i=3; i<=4000; i+=2)
    {
        if(!p[i])
        {
            v.pb(i);
            for(ll j=i*i; j<=4000; j+=(2*i))
                p[j]=1;
        }
    }
}
int main()
{
    prime();
    ll n;
    map<int,int>a;
    map<int,int>::iterator it;
    scanf("%lld",&n);
    ll len=v.size();
    a[1]=n;
    for(ll i=0; i<n; i++)
    {
        ll x;
        scanf("%lld",&x);
        for(ll j=0; j<len && v[j]*v[j]<=x; j++)
        {
            if(x%v[j]==0)
            {
                a[v[j]]++;
                while(x%v[j]==0)
                {
                    x/=v[j];
                }
            }
        }
        if(x>1)
        {
            a[x]++;
        }
    }
    ll sum=0,tmp=0,f=0;
    for(it=a.begin();it!=a.end();++it)
    {
        if(it->second==n)
        {
            tmp=it->first;
        }
    }
    for(it=a.begin();it!=a.end();++it)
    {
        if(f)
        {
            if(sum<it->second)
                sum=it->second;
        }
        if(it->first==tmp)
        {
            f=1;
        }
    }
   // cout<<a[3]<<endl;
    if(sum==0|| n==2||sum==1)
        cout<<"-1";
    else
        cout<<n-sum;
}
