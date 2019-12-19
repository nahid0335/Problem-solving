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
    ll t;
    cin>>t;
    set<pair<int,int> >s;
    set<pair<int,int> >::iterator it;
    while(t--)
    {
        ll n,a=0,f=0;
        s.clear();
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            ll x,y;
            cin>>x>>y;
            a+=x;
            s.insert(mp(x*n,y));
        }
        for(it=s.begin();it!=s.end();++it)
        {
            ll x=it->first,y=it->second;
            if(s.find(mp(a*2-x,y))==s.end())
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
