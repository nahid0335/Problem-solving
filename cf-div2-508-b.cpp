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
#include<iomanip>
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
    ll n;
    cin>>n;
    if(n==1)
    {
        cout<<"No";
    }
    else
    {

        vc(int)v1,v2;
        ll a=(n*(n+1))/2;
        ll tmp=0;
        for(int i=2; i<=n; i++)
        {
            ll x=a-i;
            if(x%i==0)
            {
                tmp=i;
                break;
            }
        }
        if(tmp==0)
            cout<<"No";
        else
        {
            cout<<"Yes"<<endl;
            v1.pb(tmp);
            for(int i=1; i<=n; i++)
            {
                if(i!=tmp)
                    v2.pb(i);
            }
            cout<<v1.size();
            ll len=v1.size();
            for(int i=0; i<len; i++)
                cout<<" "<<v1[i];
            cout<<endl;
            cout<<v2.size();
            len=v2.size();
            for(int i=0; i<len; i++)
                cout<<" "<<v2[i];
        }
    }
}
