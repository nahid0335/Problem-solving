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
#include<iomanip>
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
    ll n,a,b;
    vc(int)v;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.pb(x);
    }
    ll sum=0,f=1;
    ll m=n-1;
    for(int i=0;i<n/2;i++)
    {
        if(v[i]==0)
        {
            if(v[m-i]!=v[i] && v[m-i]!=2)
            {
                f=0;
                break;
            }
            if(v[m-i]==2)
                sum+=a;
        }
        else if(v[i]==1)
        {
            if(v[m-i]!=v[i] && v[m-i]!=2)
            {
                f=0;
                break;
            }
            if(v[m-i]==2)
                sum+=b;
        }
        else
        {
            if(v[m-i]==0)
            {
                sum+=a;
            }
            else if(v[m-i]==1)
                sum+=b;
            else
            {
                sum+=2*(min(a,b));
            }
        }
    }
    if(n%2)
    {
        if(v[n/2]==2)
            sum+=(min(a,b));
    }
    if(!f)
    {
        cout<<"-1";
    }
    else
        cout<<sum;
}
