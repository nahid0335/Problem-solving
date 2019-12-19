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
bool p[1000004];
void prime()
{
    v.pb(2);
    for(ll i=4;i<1000004;i+=2)
        p[i]=1;
    v.pb(3);
    for(ll i=3;i<1000004;i+=2)
    {
        if(!p[i])
        {
            v.pb(i);
            for(ll j=i*i;j<1000004;j+=(2*i))
                p[j]=1;
        }
    }
}
int main()
{
    read;
    write;
    prime();
    ll len=v.size();
    ll t;
    cin>>t;
    ll j=0;
    while(j<t)
    {
        j++;
        ll a,b,n,sum=1,f=0;
        cin>>a>>b>>n;
        for(ll i=0;i<len && v[i]<=n;i++)
        {
            ll c=0;
            while(n%v[i]==0)
            {
                n/=v[i];
                c++;
            }
            ll x=0;
            while(a%v[i]==0)
            {
                a/=v[i];
                x++;
            }
            ll y=0;
            while(b%v[i]==0)
            {
                b/=v[i];
                y++;
            }
            ll s=max(x,y);
            if(c<s)
            {
                cout<<"Case "<<j<<": impossible"<<endl;
                f=1;
                break;
            }
            else if(c>s)
            {
                sum*=powl(v[i],c);
            }
           // cout<<c<<endl;
        }
        if((a!=1||b!=1)&&!f)
        {
            cout<<"Case "<<j<<": impossible"<<endl;
        }
        else if(!f)
        {
            if(n>0)
                sum*=n;
            cout<<"Case "<<j<<": "<<sum<<endl;
        }
    }
}
