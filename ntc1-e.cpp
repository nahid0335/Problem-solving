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

ll fun(ll n)
{
    ll c=0;
        while(n>0)
        {
            n/=5;
            c+=n;
        }
    return c;
}
int main()
{
    read;
    write;
    ll t;
    cin>>t;
    ll z=0;
   // cout<<fun(10)<<endl;
    while(z<t)
    {
        z++;
        ll n;
        cin>>n;
        ll a=1;
        ll b=10000000005;
        ll mid=(a+b)/2;
        ll ans=0,f=0;
        while(a<=b)
        {
            ll x=fun(mid);
            if(x==n)
            {
                ans=mid;
                b=mid-1;
                f=1;
            }
            else if(x<n)
                a=mid+1;
            else
                b=mid-1;
            mid=(a+b)/2;
           // cout<<mid<<" "<<x<<endl;
        }
        if(f)
        {
            cout<<"Case "<<z<<": "<<ans<<endl;
        }
        else
        {
            cout<<"Case "<<z<<": impossible"<<endl;
        }
    }
}
