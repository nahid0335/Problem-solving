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

int main()
{
    ll n;
    cin>>n;
    vc(ll)v1,v2;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        v1.pb(x);
        sum+=x;
        if(i==0)
        {
            v2.pb(x);
        }
        else
        {
            v2.pb(v2[i-1]+x);
        }
        //cout<<v2[i];
    }
    if(sum%3)
    {
        cout<<"0";
        return 0;
    }
    else
    {
        ll a=sum/3;
        //cout<<a;
        ll b=0,c=0,ans=1;
        n=v2.size();
        for(ll i=1;i<n-1;i++)
        {
            if(v2[i]==a)
            {
                while(v2[i]==a && i<n-1)
                {
                    c++;
                    i++;
                }
                //cout<<c;
                a*=2;
                ans*=c;
                c=0;
                i--;
            }
        }
        cout<<ans;
    }

}
