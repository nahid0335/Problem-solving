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
    ll t,k=0;
    cin>>t;
    while(k<t)
    {
        k++;
        ll n,d,ans=0,i,x;
        priority_queue<pair<ll,ll>,vector<pair<ll,ll> >,greater<pair<ll,ll> > >b;
        priority_queue<pair<ll,ll> >s;
        cin>>n>>d;
        fi(i,1,n+1)
        {
            cin>>x;
            b.push(mp(x,i));
            s.push(mp(x,i));
            while(!b.empty() && (i-b.top().second)>=d)
                b.pop();
            while(!s.empty() && (i-s.top().second)>=d)
                s.pop();
            if(b.size()>=2 &&s.size()>=2)
                ans=max(ans,abs(b.top().first-s.top().first));
        }
        cout<<"Case "<<k<<": "<<ans<<endl;
    }
    return 0;
}
