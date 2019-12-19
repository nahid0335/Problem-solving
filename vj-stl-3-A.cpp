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
    ll n,q,j=0;
    while(cin>>n>>q,n)
    {
        j++;
        cout<<"CASE# "<<j<<":"<<endl;
        vc(int)v;
        ll a;
        while(n--)
        {
            cin>>a;
            v.pb(a);
        }
        st(v);
        ll len=v.size();
        while(q--)
        {
            ll x=0;
            cin>>a;
            for(ll i=0;i<len;i++)
            {
                if(v[i]==a)
                {
                    cout<<a<<" found at "<<i+1<<endl;
                    x=1;
                    break;
                }
                if(v[i]>a)
                {
                    cout<<a<<" not found"<<endl;
                    x=1;
                    break;
                }
            }
            if(!x)
            {
                cout<<a<<" not found"<<endl;
            }
        }
    }
    return 0;
}
