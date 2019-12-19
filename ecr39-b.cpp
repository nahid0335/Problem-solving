#include<cstdio>
#include<iomanip>
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

int main()
{
    ll a,b,f;
    scanf("%lld %lld",&a,&b);
    while(1)
    {
        f=0;
        if(a==0||b==0)
            break;
        if(a>=2*b && b!=0)
        {
            f=1;
            a=a%(b*2);
        }
        if(b>=a*2 && a!=0)
        {
            f=1;
            b=b%(a*2);
        }
        if(!f)
            break;
    }
    printf("%lld %lld",a,b);
}
