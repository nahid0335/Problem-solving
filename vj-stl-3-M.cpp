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
        vc(int)v;
        ll n,a,p1,p,sum,f=0;
        cin>>n;
        while(n--)
        {
            cin>>a;
            v.pb(a);
        }
        ll len=v.size();
        for(ll i=1;i<2000;i++)
        {
            sum=0;
            p1=v[0];
            for(ll j=0;j<len;j++)
            {
                if(j==len-1)
                {
                    v[j]=abs(v[j]-p1);
                }
                else
                    v[j]=abs(v[j]-v[j+1]);
                sum+=v[j];
            }
            if(sum==0)
            {
                f=1;
                break;
            }
        }
        if(f)
            cout<<"ZERO"<<endl;
        else
            cout<<"LOOP"<<endl;
    }
    return 0;
}
