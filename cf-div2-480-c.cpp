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
#define mset(a) memset(a,-1,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

map<int,int>m1;
int main()
{
    ll n,m;
    cin>>n>>m;
    vc(int)v,v1;
    int a[256];
    mset(a);
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v.pb(x);
        if(!m1[x])
        {
            m1[x]=i;
            v1.pb(x);
        }
    }
    ll len=v1.size();
    for(ll i=0;i<len;i++)
    {
        ll b=m,k=0,j;
        ll jm=v1[i];
        j=jm;
        while(b-- && j>-1)
        {
            k++;
            if(a[j]!=-1)
            {
                break;
            }
            j--;
        }
        j++;
        //b++;
        for(ll x=j;x<=jm;x++)
        {
            a[x]=j;
        }
        jm=j;
        if(b!=0)
        {
            for(ll x=i+1;x<len;x++)
            {
                if(v1[x]<=v1[i]+b)
                {
                    for(ll t=v1[i];t<=v1[x];t++)
                    {
                        if(a[t]==-1)
                            a[t]=jm;
                    }
                    //break;
                }
                else if(v1[x]<=v1[i]+m)
                {
                    break;
                }
            }
        }
    }
    for(ll i=0;i<n;i++)
        cout<<a[v[i]]<<" ";
        cout<<endl;
    /*map<int,int>::iterator it=m1.begin();
    for(it;it!=m1.end();++it)
        cout<<it->first<<" "<<it->second<<endl;
    for(ll i=0;i<len;i++)
    {
        cout<<v1[i]<<" "<<m1[v1[i]]<<endl;
    }*/
}
