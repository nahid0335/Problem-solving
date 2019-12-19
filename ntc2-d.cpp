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

#define ll unsigned long long
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

vc(ll)v;
void com()
{
    for(ll i=2;i<=64;i++)
    {
        for(ll j=2;j<i;j++)
        {
            if(i%j==0)
            {
                v.pb(i);
                break;
            }
        }
    }
}
int main()
{
    read;
    write;
    com();
    ll len=v.size();
    set<ll>s;
    s.insert(1);
    ll tmp=1;
    for(int i=2;i<=65536;i++)
    {
        tmp=1;
        du ran=log10(ULLONG_MAX)/log10(i);
        for(int j=1,k=0;j<ran;j++)
        {
            tmp*=i;
            if(j==v[k])
            {
                k++;
                s.insert(tmp);
            }
        }
    }
    set<ll>::iterator it;
    for(it=s.begin();it!=s.end();++it)
    {
        cout<<*it<<endl;
    }
}
