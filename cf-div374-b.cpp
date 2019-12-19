#include<cstdio>
#include<iomanip>
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
#define st(a) sort(a.begin(),a.end(),cmp)
#define mp(a,b) make_pair(a,b)

bool cmp(string &s1,string &s2)
{
    return s1.size()<s2.size();
}
int main()
{
    ll n,k;
    cin>>n>>k;
    string s;
    vc(string)v;
    for(ll i=0;i<n;i++)
    {
        string a;
        cin>>a;
        v.pb(a);
    }
    cin>>s;
    ll len=s.size();
    st(v);
    ll b=0,c=0;
    ll w=0,f=1;
    ll q=v.size();
    for(ll i=0;i<q;i++)
    {
        ll m=v[i].size();
        if(m>len)
            break;
        else if(m<len)
        {
            b++;
            w++;
            c++;
        }
        else
        {
            if(f)
            {
                f=0;
                c++;
                b++;
                w++;
            }
            else
            {
                c++;
                w++;
            }
        }
        if(c==k && f)
        {
            b+=5;
            w+=5;
            c=0;
        }
        if(c==k && !f)
        {
            if(i<q-1)
            {
                if(v[i+1].size()==len)
                {
                    w+=5;
                    c=0;
                }
                else
                {
                    w++;
                    c=0;
                }
            }
            else
            {
                w++;
                c=0;
            }
        }
       // cout<<c<<" "<<w<<" "<<k<<endl;
    }
    cout<<b<<" "<<w;
}
