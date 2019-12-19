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
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
bool p[1000005];
int main()
{
    ll n;
    cin>>n;
    ll a,b,m;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b>>m;
        ll c=0;
        while(a<=b)
        {
            ll sum=1;
            ll x=a;
            while(1)
            {
                while(x)
                {
                    ll q=x%10;
                    if(q!=0)
                    {
                        sum*=q;
                    }
                        x/=10;
                }
                x=sum;
                if(sum<10 || p[sum])
                {
                    if(sum==m)
                    {
                        c++;
                        p[sum]=1;
                    }
                    else if(p[sum])
                    {
                        c++;
                        p[a]=1;
                    }
                    break;
                }

            }
            a++;
        }
        cout<<c<<endl;
    }
}
