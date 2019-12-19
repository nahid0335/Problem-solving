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

int main()
{
    read;
    write;
    ll n;
    while(cin>>n,n)
    {
        vc(int)v;
        for(ll i=1;i*i<=n;i++)
        {
            if(n%i==0)
            {
                v.pb(i);
                if(i!=n/i)
                    v.pb(n/i);
            }
        }
        ll len=v.size();
        ll s=0;
        for(ll i=0;i<len;i++)
        {
            for(ll j=i;j<len;j++)
            {
                ll x=(v[i])/(__gcd(v[i],v[j]));
                x*=v[j];
                if(x==n)
                    s++;
            }
        }
        cout<<n<<" "<<s<<endl;
    }
    return 0;
}
