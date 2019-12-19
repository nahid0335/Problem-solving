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
#include<iomanip>
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

int a[5005];
int main()
{
    ll n,k;
    cin>>n>>k;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        if(i==0)
            a[i]=x;
        else
            a[i]=a[i-1]+x;
    }
    du sum=0;
    for(ll i=k;i<=n;i++)
    {
        sum=max(sum,(du)a[i]/i);
        for(ll j=i+1;j<=n;j++)
        {
            ll x=a[j]-a[j-i];
            sum=max(sum,(du)x/i);
        }
    }
    cout<<setprecision(15)<<sum;
}
