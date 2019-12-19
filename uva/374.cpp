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

ll bmd(ll b,ll p,ll m)
{
    if(p==0)
        return 1%m;
    if(p%2==0)
    {
        ll x=bmd(b,p/2,m);
        return ((x%m)*(x%m))%m;
    }
    else
        return ((b%m)*(bmd(b,p-1,m)))%m;
}
int main()
{
    read;
    write;
    ll b,p,m;
    string s;
    while(cin>>b>>p>>m)
    {
        cout<<bmd(b,p,m)<<endl;
    }
    return 0;
}
