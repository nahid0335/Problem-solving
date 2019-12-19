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
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

vector<int>v;
int p[(mx/64)+2];
void prime()
{
    p[0]|=0;
    for(ll i=3; i*i<=mx; i+=2)
    {
        if(!chk(i))
        {
            for(int j=i*i; j<=mx; j+=(i<<1))
                sset(j);
        }
    }
    v.pb(2);
    for(int i=3; i<=mx; i+=2)
    {
        if(!chk(i))
            v.pb(i);
    }
}
int main()
{
    prime();
    ll len=v.size();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        if(n==1)
        {
            printf("0\n");
        }
        else
        {
            ll x=n;
            ll sum=1;
            // ll sn=sqrt(n);
            for(ll i=0; i<len && v[i]*v[i]<=n; i++)
            {
                if(n%v[i]==0)
                {
                    ll tsum=1;
                    ll p=1;
                    while(n%v[i]==0)
                    {
                        n/=v[i];
                        p*=v[i];
                        tsum+=p;
                    }
                    // cout<<tsum<<" "<<n<<endl;
                    //  sn=sqrt(n);
                    sum*=tsum;
                }
            }
            if(n!=1)
            {
                sum*=(n+1);
            }
            sum-=x;
            printf("%lld\n",sum);
        }
    }
}
