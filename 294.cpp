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

int main()
{
    read;
    write;
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,u,mx=0,j=0,a;
        cin>>l>>u;
        for(ll i=l;i<=u;i++)
        {
            a=i;
            ll c=1;
            for(ll k=2;k*k<=a;k=(k==2?3:k+2))
            {
                ll p=0;
                while(a%k==0)
                {
                    p++;
                    a=a/k;
                }
                if(p!=0)
                {
                    c*=p+1;
                }
            }
            if(a!=1)
            {
                c*=2;
            }
            if(c>mx)
            {
                j=i;
                mx=c;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<j<<" has a maximum of "<<mx<<" divisors."<<endl;
    }
    return 0;
}
