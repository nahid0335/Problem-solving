#include<cstdio>
#include<iomanip>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
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

int main()
{
    ll m,p;
    scanf("%lld %lld",&m,&p);
    int a[m];
    for(ll i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
        if(i!=0)
        {
            a[i]=a[i]+a[i-1];
        }
    }
    ll sum=0;
    scanf("%lld",&sum);
    ll s=0,c=0;
    for(ll i=0;i<m;)
    {
        if((a[i]-s)<sum)
        {
            i++;
        }
        else if((a[i]-s)==sum)
        {
            s=a[i];
            if(i!=m-1)
                scanf("%lld",&sum);
            i++;
            c++;

        }
        else
        {
            ll x;
            scanf("%lld",&x);
            sum+=x;
        }
    }
    printf("%lld",c);
}
