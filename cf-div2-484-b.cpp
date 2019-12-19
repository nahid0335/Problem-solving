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

map<ll,ll>m;
int main()
{
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        m[x]=i;
        v.pb(x);
    }
    st(v);
   /* cout<<n<<endl;
    for(ll i=0;i<v.size();i++)
        cout<<v[i]<<endl;*/
    priority_queue<ll>q;
    string s;
    cin>>s;
    for(ll i=0,j=0;i<2*n;i++)
    {
        if(s[i]=='0')
        {
            cout<<m[v[j]]<<" ";
            q.push(v[j]);
            j++;
        }
        else
        {
            ll x=q.top();
           // cout<<x<<endl;
            q.pop();
            cout<<m[x]<<" ";
        }
    }
   // cout<<m[3]<<" "<<m[1];
}
