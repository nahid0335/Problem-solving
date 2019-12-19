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
#define z 1000100

bool p[z];
vc(int)v;
void prime()
{
    v.pb(2);
    for(ll i=2;i<z;i+=2)
        p[i]=1;
    for(ll i=3;i*i<z;i+=2)
    {
        if(!p[i])
        {
            v.pb(i);
            for(ll j=i*i;j<z;j+=(2*i))
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
    ll i=0;
    while(i<t)
    {
        i++;
        cout<<"Case "<<i<<": ";
        ll n;
        cin>>n;
        ll sum=1;
        ll sn=sqrt(n);
        ll len=v.size();
        for(ll i=0;i<len&& v[i]*v[i]<=sn;i++)
        {
            if(n<v[i])
                break;
            if(n%v[i]==0)
            {
                ll a=1;
                while(n%v[i]==0)
                {
                    n/=v[i];
                    a++;
                }
                sum*=a;
            }
        }
        if(n!=1)
            sum*=2;
        cout<<sum-1<<endl;
    }
}
