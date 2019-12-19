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
    ll n,m;
    cin>>n>>m;
    ll x,y;
    y=x=m-1;
    if(m==0 && n==0)
    {
        cout<<"Yes";
        return 0;
    }
    if(m==0|| n==0)
    {
        if(m==1)
        {
            cout<<"Yes";
            return 0;
        }
        cout<<"No";
        return 0;
    }
    while(y)
    {
        if(y>=n)
        {
            break;
        }
        y+=2;
    }
    if(y!=n)
    {
        cout<<"No";
    }
    else
        cout<<"Yes";
}
