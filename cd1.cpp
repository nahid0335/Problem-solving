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

int main()
{
    ll n,a;
    vc(int)v;
    cin>>n;
    v.pb(0);
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll c=0,s=0;
    for(ll i=n;i>1;i--)
    {
        s=v[i];
        while(s--)
        {
            i--;
            if(i==0)
                break;
            c++;
            if(s-v[i]<0)
            {
                s=s-(s-v[i]);
            }
        }
    }
    cout<<n-c;
    return 0;
}
