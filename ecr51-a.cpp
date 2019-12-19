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
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

int main()
{
    ll n;
    cin>>n;
    int a[1000]={0};
    vc(int)v;
    string sf="";
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
        v.pb(x);
    }
    ll s=0;
  //  st(v);
    for(int i=0;i<1000;i++)
    {
        if(a[i]==1)
            s++;
    }
    if(s%2==0)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            if(a[v[i]]==1 && s%2==0)
            {
                sf+='A';
                s--;
            }
            else if(a[v[i]]==1 && s%2==1)
            {
                sf+='B';
                s--;
            }
            else
            {
                sf+='A';
            }
        }
        cout<<sf<<endl;
    }
    else
        cout<<"NO"<<endl;
}
