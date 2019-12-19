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
    ll t,z=0;
    cin>>t;
    while(t--)
    {
        z++;
        cout<<"Case "<<z<<": ";
        ll x,l,n;
        cin>>x>>l>>n;
        ll sum=0;
        ll rsum=n-l+1;
        if(x%2)
        {
            if(x>l)
            {
                sum+=x-l;
            }
            ll p=n;
            ll a=0;
            while(p!=0)
            {
                p=(p>>1);
                a++;
            }
            a--;
            ll a1=(1<<a);
            a1=n%a1;

            ll s;
            p=l-1;
            s=p;
            ll c=0;
            while(p!=0)
            {
                p=(p>>1);
                c++;
            }
            c--;
            ll c1=(1<<c);
            c1=s%c1;
            ll lsum=0;

            p=x;
            ll b=0;
            while(p!=0)
            {
                p=(p>>1);
                b++;
            }
            b--;
            if(b==0)
                sum+=a+1-c-1;
            else
            {
                if(x<l)
                    sum+=a-c;
                else
                    sum+=a-b;
                if(a1)
                    {
                        a1=2*a1+1;
                        if(a1>=x)
                            sum++;
                    }
                    if(c1)
                    {
                        c1=c1*2+1;
                        if(c1>=x)
                            sum--;
                    }
            }

        }
        else
        {
            if(x>l)
            {
                sum+=x-l;
            }
        }
        ll g=__gcd(sum,rsum);
        cout<<sum/g<<"/"<<rsum/g<<endl;
    }
}
