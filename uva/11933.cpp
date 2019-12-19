#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
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
    ll n;
    while(cin>>n && n)
    {
        vc(int)v;
        while(n)
        {
            ll m=n%2;
            v.pb(m);
            n/=2;
        }
        ll len=v.size();
        ll c=1,i,a=0,b=0;
        fi(i,0,len)
        {
            if(v[i]==1)
            {
                if(c%2==0)
                    b+=powl(2,i);
                else
                    a+=powl(2,i);
                c++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
