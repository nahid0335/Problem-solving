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
    ll t,j=1;
    scanf("%lld",&t);
    while(j<=t)
    {
        ll n,c,mc=0,ans,p=1;
        scanf("%lld %lld",&n,&c);
        if(n>=c||n==0)
        {
            printf("Case %lld: 0\n",j);
            j++;
            continue;
        }
        mc=1*(c-n);
        for(ll i=2;i<=c;i++)
        {
            ans=i*(c-n*i);
            if(mc<ans)
            {
                mc=ans;
                p=i;
            }
            else
                break;
        }
        printf("Case %lld: %lld\n",j,p);
        j++;
    }
    return 0;
}
