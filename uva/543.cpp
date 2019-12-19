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
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<bitset>
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
bool bs(ll a)
{
    if(a%2==0)
        return 0;
    for(ll i=3;i*i<=a;i+=2)
    {
        if(a%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    read;
    write;
    ll n;
    while(cin>>n,n)
    {
        ll x=1,h=n/2;
        for(int i=3;i<=h;i+=2)
        {
            if(bs(i))
            {
                ll p=n-i;
                if(bs(p))
                {
                    cout<<n<<" = "<<i<<" + "<<p<<endl;
                    x=0;
                    break;
                }
            }
        }
        if(x)
            cout<<"Goldbach's conjecture is wrong."<<endl;
    }
    return 0;
}
