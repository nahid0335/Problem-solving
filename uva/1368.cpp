#include<cstdio>
#include<iomanip>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
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
    ll t,m,n;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        char v[55][1005];
        string s,s1="";
        for(ll i=0;i<m;i++)
        {
            cin>>v[i];
           // v[i].pb(s);
        }
        int a[27];
        ll ans=0;
        for(ll i=0;i<n;i++)
        {
            ll mx=0,c=0;
            mset(a);
            for(ll j=0;j<m;j++)
            {
                ll x=(v[j][i]-'A');
                a[x]++;
            }
            for(ll j=0;j<27;j++)
            {
                if(a[j]>mx)
                {
                    ans+=mx;
                    mx=a[j];
                    c=j;
                }
                else
                {
                    ans+=a[j];
                }
            }
            s1+=('A'+c);
        }
        cout<<s1<<endl;
        cout<<ans<<endl;
    }
}
