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

int fx[]={-1,-1,-1,0,1,1,1,0};
int fy[]={-1,0,1,1,1,0,-1,-1};
int main()
{
    ll n,m;
    cin>>n>>m;
    char a[n+1][m+1];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
            cin>>a[i][j];
    }
   /* for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
            cout<<a[i][j];
        cout<<endl;
    }*/
    ll f=0;
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<m;j++)
        {
            if(a[i][j]=='.')
            {
                for(ll k=0;k<8;k++)
                {
                    ll tx=i+fx[k];
                    ll ty=j+fy[k];
                    if(tx>=0 && tx<n && ty>=0 && ty<m && a[tx][ty]=='*')
                        f=1;
                }
            }
            else if(a[i][j]>='1' && a[i][j]<='8')
            {
                ll z=a[i][j]-'0';
                ll c=0;
                for(ll k=0;k<8;k++)
                {
                    ll tx=i+fx[k];
                    ll ty=j+fy[k];
                   // cout<<tx<<" "<<ty<<endl;
                    if(tx>=0 && tx<n && ty>=0 && ty<m && a[tx][ty]=='*')
                        c++;
                }
              //  cout<<z<<" "<<c<<endl;
                if(c!=z)
                    f=1;
                //cout<<f<<endl;
            }
            if(f)
                break;
        }
        if(f)
            break;
    }
    if(f)
        cout<<"NO";
    else
        cout<<"YES";
}
