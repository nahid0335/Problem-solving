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
#define N 1000010
bool a[N];
ll p[N],y=0;
void prime()
{
    a[2]=1;
    for(ll i=3;i<N;i+=2)
        a[i]=1;
    for(ll i=3;i*i<=N;i+=2)
    {
        if(a[i])
        {
            for(ll j=i*i;j<N;j+=(2*i))
                a[j]=0;
        }
    }
    for(ll i=0;i<N;i++)
    {
        if(a[i]==1)
            p[y++]=i;
    }
}
int main()
{
    read;
    write;
    prime();
    ll t,k=0;
    cin>>t;
    while(k<t)
    {
        k++;
        ll n,cc=1;
        cin>>n;
        ll c=1,f=1;
        for(ll i=0;i<y && p[i]*p[i]<=n;i++)
        {
            if(n<p[i])
                break;
            if(n%p[i]==0)
            {
                c=1;
            while(n%p[i]==0)
            {
                c++;
                n/=p[i];
            }
            cc*=(c);
            }
        }
        if(n>1)
            cc*=2;
        cout<<"Case "<<k<<": "<<cc-1<<endl;
    }
}
