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
    read;
    write;
    ll t,k=0;
    scanf("%lld",&t);
    while(k<t)
    {
        k++;
        ll n,s,c,x,y;
        scanf("%lld",&n);
        s=ceil((double)sqrt(n));
        c=s*s-s+1;
        if(s%2==0)
        {
            if(n<=c)
            {
                y=s;
                x=s-(c-n);
            }
            else
            {
                x=s;
                y=s-(n-c);
            }
        }
        else
        {
            if(n>=c)
            {
                y=s;
                x=s-(n-c);
            }
            else
            {
                x=s;
                y=s-(c-n);
            }
        }
        printf("Case %lld: %lld %lld\n",k,x,y);
    }
    return 0;
}
