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

bool arr[101];
vc(int)vp;
void prime()
{
    vp.pb(2);
    for(ll i=4;i<101;i+=2)
        arr[i]=1;
    for(ll i=3;i<101;i+=2)
    {
        if(!arr[i])
        {
            vp.pb(i);
            if(i<sqrt(101)+2)
            {
                for(ll j=i*i;j<101;j+=(2*i))
                    arr[j]=1;
            }
        }
    }
}
ll divs(ll a,ll m)
{
    if(m==0)
        return 0;
    vc(int)v;
    ll len=vp.size();
    for(ll i=0;i<len && vp[i]<a;i++)
    {
        if(a%vp[i]==0)
           v.pb(vp[i]);
    }
    reverse(v.begin(),v.end());
    len=v.size();
    //cout<<v[0];
    for(ll i=0;i<len;i++)
    {
        if(m%v[i]==0)
            return m/v[i];
    }
    return -1;
}
int main()
{
    read;
    write;
    prime();
    //ll n;
    //cin>>n;
    ll k=0,s,t;
    while(cin>>s>>t && s)
    {
        k++;
       // ll s,t;
       // cin>>s>>t;
        ll m=t-s;
        ll ans=divs(s,m);
        cout<<"Case "<<k<<": "<<ans<<endl;
    }
}
