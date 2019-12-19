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

int v2[1000005];
int v5[1000005];
void pre()
{
    for(ll i=2;i<1000005;i++)
    {
        ll n=i;
        ll c=0;
        while(n%2==0)
        {
            n/=2;
            c++;
        }
        v2[i]=v2[i-1]+c;
        n=i;
        c=0;
        while(n%5==0)
        {
            n/=5;
            c++;
        }
        v5[i]=v5[i-1]+c;
    }
}
int main()
{
    pre();
    ll t;
    cin>>t;
    ll i=0;
    while(i<t)
    {
        i++;
        ll sum=0;
        ll n,r,p,q;
        cin>>n>>r>>p>>q;
        ll a=(v2[p]-v2[p-1])*q;
        ll b=(v5[p]-v5[p-1])*q;
        a+=v2[n]-v2[n-r]-v2[r];
        b+=v5[n]-v5[n-r]-v5[r];
        cout<<"Case "<<i<<": "<<min(a,b)<<endl;
    }
}
