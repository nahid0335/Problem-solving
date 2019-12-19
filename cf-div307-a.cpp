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
#define st(a) sort(a.rbegin(),a.rend())
#define mp(a,b) make_pair(a,b)

ll b[2002];
int main()
{
    ll n;
    cin>>n;
    vc(ll)v,v1;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    v1=v;
    st(v);
    ll c=0;
    for(ll i=0;i<n;i++)
    {
        if(!b[v[i]])
        {
            c=i+1;
            b[v[i]]=c;
        }
    }
    for(ll i=0;i<n;i++)
    {
        cout<<b[v1[i]]<<" ";
    }
}
