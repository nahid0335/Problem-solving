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
#define N 1000000001
vector<bool>v(N,1);
vector<int>nv;
void prime()
{
    v[0]=0;
    v[1]=0;
    for(ll i=4;i<N;i+=2)
        v[i]=0;
    for(ll i=3;i*i<N;i+=2)
    {
        for(ll j=i*i;j<N;j+=(2*i))
        {
            if(v[j])
                v[j]=0;
        }
    }
    for(ll i=3;i<N-2;i+=2)
    {
        if(v[i] && v[i+2])
        {
            nv.pb(i);
        }
    }
}
int main()
{
    prime();
    ll s=nv.size();
    ll n,m,f=0,x,y;
    scanf("%lld %lld",&n,&m);
    for(ll i=0;i<s;i++)
    {
        if(nv[i]+2>=n && f==0)
        {
            f=1;
            x=i;
        }
        else if(nv[i]+2>=m)
        {
            y=i;
            break;
        }
    }
    printf("lld",y-x+1);
    return 0;
}
