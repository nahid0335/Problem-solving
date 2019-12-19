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
bool v[257];
int main()
{
    ll m,a,b,i,d=0;
    cin>>m>>a>>b;
    ll c=0;
    ll x=m;
    while(x)
    {
        x/=2;
        c++;
    }
    c--;
    v[a]=1;
    v[b]=1;
    for(i=2; i<=m; i*=2)
    {
        ll y=0;
        for(ll j=1; j<=m; j++)
        {
            if(v[j])
                y++;
            if(y==2)
                break;
            if(j%i==0)
                y=0;
        }
        if(y==2)
        {
            break;
        }
    }
    x=i;
    //cout<<x<<" ";
    while(x)
    {
        x/=2;
        d++;
    }
    d--;
    if(d==c)
        cout<<"Final!";
    else
        cout<<d;
}
