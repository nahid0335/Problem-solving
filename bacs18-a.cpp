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
#include<limits.h>
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
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

int main()
{
    ll t;
    cin>>t;
    ll a=0;
    while(t--)
    {
        a++;
        ll f=0;
        cout<<"Case "<<a<<": ";
        ll n;
        ll ar[105];
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>ar[i];
            if(i!=0)
            {
                if(ar[i]-ar[i-1]==1)
                    f=1;
            }
        }
        if(f)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}