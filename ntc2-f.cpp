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
#define mx 2<<31
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

vc(int)v;
bool p[100006];
void prime()
{
    v.pb(2);
    for(ll i=4; i<=100005; i+=2)
        p[i]=1;
    for(ll i=3; i<=100005; i+=2)
    {
        if(!p[i])
        {
            v.pb(i);
            for(ll j=i*i; j<=100005; j+=(2*i))
                p[j]=1;
        }
    }
}
int main()
{
   // read;
   // write;
    prime();
    ll len=v.size();
    ll n,d;
    while(cin>>n>>d)
    {
        if(n==0 && d==0)
        {
            break;
        }
        ll sum=1,f=1;
        d=abs(d);
        if(n==0||d==0)
        {
            if(d==1)
                cout<<"1"<<endl;
            else
                cout<<"0"<<endl;
        }
        else
        {
            for(ll i=0; i<len && v[i]<=n; i++)
            {
                if(d%v[i]==0)
                {
                    ll c=0;
                    while(d%v[i]==0)
                    {
                        c++;
                        d/=v[i];
                    }
                    ll b=0,s=v[i];
                    ll x=n/s;
                    while(x>0)
                    {
                        b+=x;
                        s*=v[i];
                        x=n/s;
                    }
                    b=b+1-c;
                    if(b<0)
                    {
                        f=0;
                        break;
                    }
                    else
                    {
                        sum*=b;
                    }
                }
                else
                {
                    ll b=0,s=v[i];
                    ll x=n/s;
                    while(x>0)
                    {
                        b+=x;
                        s*=v[i];
                        x=n/s;
                    }
                    b++;
                    sum*=b;
                }
            }
            if(d>1)
            {
                f=0;
            }
            if(f)
            {
                cout<<sum<<endl;
            }
            else
                cout<<"0"<<endl;
        }
    }
}
