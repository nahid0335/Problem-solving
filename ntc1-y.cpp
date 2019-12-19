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

bool p[10005];
vc(int)v;
void prime()
{
    v.pb(2);
    for(ll i=4; i<10005; i+=2)
        p[i]=1;
    for(ll i=3; i<10005; i+=2)
    {
        if(!p[i])
        {
            v.pb(i);
            for(ll j=i*i; j<10005; j+=(2*i))
                p[j]=1;
        }
    }
}
int main()
{
    prime();
    ll t;
    ll len=v.size();
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n==0||n==1)
            cout<<"Ordinary Number"<<endl;
        else
        {
            ll od=0,ev=0;
            for(ll i=0; i<len && v[i]*v[i]<=n; i++)
            {
                if(n%v[i]==0)
                {
                    ll c=0;
                    while(n%v[i]==0)
                    {
                        n/=v[i];
                        c++;
                    }
                    if(c%2)
                        od++;
                    else
                        ev++;
                }
            }
            if(n>1)
            {
                od++;
            }
            if(ev>od)
                cout<<"Psycho Number"<<endl;
            else
                cout<<"Ordinary Number"<<endl;
        }
    }
}
