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

int a1[500],a2[500],a3[500];
int main()
{
    ll n;
    cin>>n;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    ll f=0,m1=-1,m2=-1,m3=-1;
    ll len=s1.size();
    if(n>=len)
    {
        cout<<"Draw";
    }
    else
    {
        for(ll i=0; i<len; i++)
        {
            ll x=s1[i];
            a1[x]++;
            if(m1<a1[x])
            {
                m1=a1[x];
            }
        }
        for(ll i=0; i<len; i++)
        {
            ll x=s2[i];
            a2[x]++;
            if(m2<a2[x])
            {
                m2=a2[x];
            }
        }
        for(ll i=0; i<len; i++)
        {
            ll x=s3[i];
            a3[x]++;
            if(m3<a3[x])
            {
                m3=a3[x];
            }
        }
        m1+=n;
        if(m1>len)
            m1=len;
        m2+=n;
        if(m2>len)
            m2=len;
        m3+=n;
        if(m3>len)
            m3=len;
        ll b[3];
        b[0]=m1;
        b[1]=m2;
        b[2]=m3;
        sort(b,b+3);
        if(b[2]==b[1])
        {
            cout<<"Draw";
        }
        else
        {
            if(b[2]==m1)
                cout<<"Kuro";
            else if(b[2]==m2)
                cout<<"Shiro";
            else
                cout<<"Katie";
        }
    }
}
