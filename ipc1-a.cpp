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

ll a[150003];
map<ll,set<int> >m;
vc(ll)v;
int main()
{
    ll t;
    scanf("%lld",&t);
    for(ll i=0;i<t;i++)
    {
        scanf("%lld",&a[i]);
        m[a[i]].insert(i);
    }
    map<ll,set<int> >::iterator it;
    for(it=m.begin();it!=m.end();++it)
    {
        while(it->second.size()>=2)
        {
            ll s1=*(it->second.begin());
            ll s2=*(++(it->second.begin()));
            a[s1]=0;
            a[s2]*=2;
            it->second.erase(s1);
            it->second.erase(s2);
            m[a[s2]].insert(s2);
        }
    }
    for(ll i=0;i<t;i++)
    {
        if(a[i]!=0)
            v.pb(a[i]);
    }
    ll len=v.size();
    printf("%lld\n",len);
    for(ll i=0;i<len;i++)
    {
        printf("%lld ",v[i]);
    }
}
