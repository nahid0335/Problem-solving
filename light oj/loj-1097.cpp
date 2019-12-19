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

list<int>v;
vector<int>vc;
void prime()
{
    for(ll i=1;i<100005;i+=2)
    {
        v.pb(i);
    }
    vc.pb(1);
    list<int>::iterator it=v.begin();
    advance(it,1);
    cout<<*it<<endl;
    for(;it!=v.end();++it)
    {
        vc.pb(*it);
        list<int>::iterator itr,itr1=v.begin();
        itr=v.begin();
        advance(itr,(*it));
        advance(itr1,(*it));
        for(;itr1!=v.end();itr=itr1)
        {
            advance(itr1,(*it));
            v.erase(itr);
        }
    }
}
int main()
{
    prime();
    ll t;
    cin>>t;
    ll i=0;
    while(i<t)
    {
        i++;
        ll n;
        cin>>n;
        cout<<"Case "<<i<<": "<<vc[n]<<endl;
    }
}
