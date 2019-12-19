#include<cstdio>
#include<iomanip>
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
ll a[101];
int main()
{
    ll n,m;
    cin>>n>>m;
    for(ll i=0;i<n;i++)
    {
        ll p;
        cin>>p;
        for(ll j=0;j<p;j++)
        {
            ll x;
            cin>>x;
            a[x]++;
        }
    }
    ll f=0;
    for(ll i=1;i<=m;i++)
    {
        if(!a[i])
        {
            f=1;
            break;
        }
    }
    if(f)
        cout<<"NO";
    else
        cout<<"YES";
}
