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

bool cmp(int a,int b)
{
    return a>b;
}
int main()
{
    read;
    write;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        queue<pair<int,int> >q;
        vc(int)v;
        for(ll i=0;i<n;i++)
        {
            ll a;
            cin>>a;
            v.pb(a);
            q.push(mp(a,i));
        }
        sort(v.begin(),v.end(),cmp);
        ll c=0,i=0;
        while(1)
        {
            ll x=q.front().first;
            ll y=q.front().second;
            q.pop();
            if(x==v[i])
            {
                i++;
                c++;
                if(y==m)
                    break;
            }
            else
                q.push(mp(x,y));
        }
        cout<<c<<endl;
    }
    return 0;
}
