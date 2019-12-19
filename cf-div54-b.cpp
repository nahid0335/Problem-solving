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
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"1";
        return 0;
    }
    vector<ll>v;
    v.pb(n);
    n/=2;
    while(n>1)
    {
        ll f=1;
        for(ll i=0;i<v.size();i++)
        {
            if(v[i]%n!=0)
            {
                f=0;
                break;
            }
        }
        if(f)
        {
            v.pb(n);
        }
        n--;
    }
    v.pb(1);
    ll len=v.size();
    for(ll i=0;i<len;i++)
        cout<<v[i]<<" ";
}
