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

ll bigmod(ll a,ll p,ll m)
{
    if(p==0)
        return 1%m;
    if(p%2==0)
    {
        ll c=bigmod(a,p/2,m);
        return ((c%m)*(c%m))%m;
    }
    else
    {
        return (a%m * bigmod(a,p-1,m))%m;
    }
}
int main()
{
    ll a,b,m;
    while(cin>>a>>b>>m)
    {
        if(a==0&&b==0&&m==0)
            break;
        ll x=bigmod(a,b,m);
        cout<<x<<endl;
    }
}
