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
    read;
    write;
    ll n;
    while(cin>>n && n)
    {
        vc(int)v;
        v.pb(n);
        int a;
        while(cin>>n && n)
        {
            v.pb(n);
        }
        ll len=v.size();
        for(ll i=1; i<len; i++)
        {
            v[i-1]=abs(v[i]-v[i-1]);

        }
        if(len>2)
        {
            a=__gcd(v[0],v[1]);
            for(ll i=2; i<len-1; i++)
            {
                a=__gcd(a,v[i]);
               // cout<<a<<",";
            }
            cout<<a<<endl;
        }
        else
        {
            cout<<v[0]<<endl;
        }
    }
}
