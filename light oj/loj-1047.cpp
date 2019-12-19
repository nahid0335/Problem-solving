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
    ll t;
    cin>>t;
    ll p=0;
    while(t--)
    {
        p++;
        cout<<"Case "<<p<<": ";
        ll n;
        cin>>n;
        int a[n+5][4];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i][0]>>a[i][1]>>a[i][2];
        }
        int b[4]={0};
      /*  b[0]=a[0][0];
        b[1]=a[0][1];
        b[2]=a[0][2];*/
        for(ll i=1;i<n;i++)
        {
            for(ll j=0;j<3;j++)
            {
                switch(j)
                {
                case 0:
                    a[i][j]=a[i][j]+min(a[i-1][1],a[i-1][2]);
                    break;
                case 1:
                    a[i][j]=a[i][j]+min(a[i-1][0],a[i-1][2]);
                    break;
                case 2:
                    a[i][j]=a[i][j]+min(a[i-1][1],a[i-1][0]);
                    break;
                }
            }
        }
        cout<<min(a[n-1][0],min(a[n-1][1],a[n-1][2]))<<endl;
    }
}
