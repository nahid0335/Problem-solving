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

ll a[1000];
int main()
{
    ll n,k,f=0;
    cin>>n>>k;
    ll x;
    if(k==1)
    {
        cout<<"Yes";
        return 0;
    }
    if(n<=k)
    {
        cout<<"No";
        return 0;
    }
    for(ll i=1;i<=k;i++)
    {
        x=n%i;
        if(a[x])
        {
            f=1;
            break;
        }
        a[x]=1;
    }
    if(f)
    {
        cout<<"No";
    }
    else
        cout<<"Yes";
}
