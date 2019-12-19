
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
    getchar();
    while(t--)
    {
        vc(int)v;
        string s;
        ll a,mb=0;
        getline(cin,s);
        stringstream ss(s);
        while(ss>>a)
            v.pb(a);
        ll len=v.size();
        for(ll i=0;i<len-1;i++)
        {
            for(ll j=i+1;j<len;j++)
            {
                ll b=__gcd(v[i],v[j]);
                if(b>mb)
                {
                    mb=b;
                }
            }
        }
        cout<<mb<<endl;
        v.clear();
    }
    return 0;
}
