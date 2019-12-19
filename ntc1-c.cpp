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

vc(int)v;
bool p[105];
void prime()
{
    for(ll i=2;i<105;i+=2)
        p[i]=1;
    v.pb(2);
    for(ll i=3;i<105;i+=2)
    {
        if(!p[i])
        {
            v.pb(i);
            for(ll j=i*i;j<105;j+=(2*i))
                p[j]=1;
        }
    }
}
int main()
{
    read;
    write;
    prime();
    ll t;
    cin>>t;
    ll j=0;
    while(j<t)
    {
        j++;
        ll n;
        cin>>n;
        cout<<"Case "<<j<<": "<<n<<" = ";
        ll len=v.size();
        ll f=0;
        for(ll i=0;i<len && v[i]<=n;i++)
        {
            ll a=n;
            ll b=0;
            while(a/v[i])
            {
                b+=a/v[i];
                a/=v[i];
            }
            if(f==0)
            {
                cout<<v[i]<<" ("<<b<<")";
                f=1;
            }
            else
                cout<<" * "<<v[i]<<" ("<<b<<")";
        }
        cout<<endl;
    }
}
