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
#define mx 1000000000
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
    ll p,q,b,n;
    cin>>n;
    while(n--)
    {
        cin>>p>>q>>b;
        ll f=0;
        for(ll i=0; i<len && v[i]*v[i]<=q; i++)
        {
            ll c=0,d=0;
            if(q%v[i]==0 && q!=1)
            {
                while(q%v[i]==0 && q!=1)
                {
                    c++;
                    q/=v[i];
                }
            }
            if(p%v[i]==0 && p!=1)
            {
                while(p%v[i]==0 && p!=1)
                {
                    d++;
                    p/=v[i];
                }
            }
            c-=d;
            if(c>0)
            {
                if(b%v[i]!=0)
                    f=1;
            }
            if(f)
                break;
        }
        if(q>1)
        {
            if(p>1)
            {
                if(p%q!=0)
                {
                    f=1;
                }
                else
                    q=1;
            }
            if(b%q!=0)
                f=1;
        }
        if(f)
            cout<<"Infinite"<<endl;
        else
            cout<<"Finite"<<endl;
    }
}
