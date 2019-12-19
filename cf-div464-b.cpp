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
    ll n,k;
     cin>>n>>k;
     vector<ll>v;
     for(ll i=0;i<k;i++)
     {
         ll x;
          cin>>x;
          v.push_back(x);
     }
     ll sum=10000000000000,m=0;
     for(ll i=0;i<k;i++)
     {
          ll x=n/v[i];
          x=n-x*v[i];
          if(sum>x)
          {
              m=i;
              sum=x;
          }
      }
     cout<<m+1<<" "<<n/v[m];
}

