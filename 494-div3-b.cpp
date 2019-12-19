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
    ll a,b,x;
    cin>>a>>b>>x;
    list<int>s;
    list<int>::iterator it;
    ll n=a+b;
    if(a>=b)
    {
        for(ll i=0;i<a;i++)
            s.push_back(0);
        it=s.begin();
        while(b>0)
        {
            if(x>=2 )
            {
                ++it;
                s.insert(it,1);
                x-=2;
                b--;
            }
            else if(x==2 && b>1)
            {
                s.push_front(1);
                s.push_back(1);
                x-=2;
                b-=2;
            }
            else if(x==1)
            {
                s.push_front(1);
                x--;
                b--;
            }
            else if(x==0)
            {
                s.insert(it,1);
                b--;
            }
        }
    }
    else
    {
        for(ll i=0;i<b;i++)
            s.push_back(1);
        it=s.begin();
        while(a>0)
        {
            if(x>=2)
            {
                ++it;
                s.insert(it,0);
                x-=2;
                a--;
            }
            else if(x==2 && b>1)
            {
                s.push_front(0);
                s.push_back(0);
                x-=2;
                a-=2;
            }
            else if(x==1)
            {
                s.push_front(0);
                x--;
                a--;
            }
            else if(x==0)
            {
                s.insert(it,0);
                a--;
            }
        }
    }
    for(it=s.begin();it!=s.end();++it)
        cout<<*it;

}
