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

set<pair<ll,ll> >m;
int main()
{
    ll n;
    while(cin>>n && n)
    {
        vector<pair<ll,ll> >v;
        for(ll i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        ll c=0;
        for(ll i=0;i<n-1;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                ll a=v[j].first-v[i].first;
                ll b=v[j].second-v[i].second;
                ll g=__gcd(a,b);
                a/=g;
                b/=g;
                //
                if(a<0)
                {
                    a=-a;
                    b=-b;
                }
                //cout<<m1<<endl;
                m.insert(mp(a,b));
            }
        }
        cout<<m.size()<<endl;
        m.clear();
    }
}
