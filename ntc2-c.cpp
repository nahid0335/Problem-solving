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

int main()
{
    ll n,k;
    cin>>n>>k;
    ll m=n;
    ll sum=0,sum2=0,ans=0;
    while(n%5==0)
    {
        n/=5;
        sum++;
    }
    while(n%2==0)
    {
        n/=2;
        sum2++;
    }
    if(sum<=k)
    {
        ll x=k-sum;
        sum=k-sum2;
        if(sum>0)
        {
            ll p=powl(2,sum)*powl(5,x);
            ans=m*p;
        }
        else
        {
            ll p=powl(5,x);
            ans=m*p;
        }
    }
    else
    {
        k-=sum2;
        if(k>0)
            ans=m*powl(2,k);
        else
            ans=m;
    }
    cout<<ans;
}
