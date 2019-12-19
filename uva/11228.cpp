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
#include<tuple>
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
#include<iomanip>
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
#define prr pair<ll,ll>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

//typedef   tuple<double,int,int>   tpl;
#define pr pair<double,pair<int,int> >
du sum,rsum;
ll s;
void mst(int a[][2],ll n,ll r)
{
    priority_queue<pr,vector<pr>,greater<pr> >q;
    map<prr,bool>m;
    for(ll i=1;i<n;i++)
    {
        q.push(mp(hypot(a[0][0]-a[i][0],a[0][1]-a[i][1]),mp(a[i][0],a[i][1])));
    }
    m[prr(a[0][0],a[0][1])]=1;
    s=1;
    sum=rsum=0.0;
    ll x,y;
    du d;
    while(!q.empty())
    {
        pair<du,pair<int,int> >p;
        p=q.top();
        d=p.first;
        x=p.second.first;
        y=p.second.second;
        q.pop();
        if(!m[prr(x,y)]&&d!=0)
        {
            if(d>r)
            {
                s++;
                rsum+=d;
            }
            else
                sum+=d;
            m[prr(x,y)]=1;
            for(ll i=0;i<n;i++)
            {
                q.push(mp(hypot(x-a[i][0],y-a[i][1]),mp(a[i][0],a[i][1])));
            }
        }
    }
}
int main()
{
    read;
    write;
    ll t;
    cin>>t;
    ll f=0;
    while(t--)
    {
        f++;
        ll n,r;
        cin>>n>>r;
        int a[n][2];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1];
        }
        mst(a,n,r);
        cout.precision(0);
        fixed(cout);
        cout<<"Case #"<<f<<": "<<s<<" "<<sum<<" "<<rsum<<endl;
    }
}
