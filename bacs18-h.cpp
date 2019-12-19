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

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[100005];
        ll b[100005];
        map<ll,ll>ma,mb;
        ll n,m;
        cin>>n>>m;
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=a[i];
            mb[a[i]]=i;
        }
        sort(a,a+n);
        for(ll i=0;i<n;i++)
        {
            ll x;
            x=mb[a[i]];
            ma[x]=i;
        }
        ll x,s,y;
        for(ll j=0;j<m;j++)
        {
            cin>>s>>x>>y;
            if(s==1)
            {
                for(ll i=0;i<n;i++)
                {
                    if(a[i]<=x)
                        a[i]-=y;
                }
            }
            else
            {
                for(ll i=0;i<n;i++)
                {
                    if(a[i]>=x)
                        a[i]+=y;
                }
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(i!=0)
            cout<<" "<<a[i];
            else
                cout<<a[i];
        }
        cout<<endl;
    }
}
