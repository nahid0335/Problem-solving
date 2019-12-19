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
#include<iomanip>
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
#define st(a) sort(a.rbegin(),a.rend())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

int main()
{
    ll n;
    cin>>n;
    vc(int)v1,v2;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v1.pb(x);
    }
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v2.pb(x);
    }
    st(v1);
    st(v2);
    ll sum1=0,sum2=0;
    for(ll i=0,j=0;;)
    {
       // cout<<sum1<<" "<<sum2<<endl;
        if(i<n &&((v1[i]>=v2[j])||(j>=n)))
        {
            sum1+=v1[i];
            i++;
           // cout<<"sum1 :"<<sum1<<endl;
        }
        else
        {
            j++;
        }
        if(j<n &&((v2[j]>=v1[i])||(i>=n)))
        {
            sum2+=v2[j];
            j++;
            //cout<<"sum2 :"<<sum2<<endl;
        }
        else
        {
            i++;
        }
        if(i>=n && j>=n)
            break;
    }
    cout<<sum1-sum2;
}
