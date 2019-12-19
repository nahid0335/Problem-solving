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
        ll n,ans=0,p,i;
        vc(int)v;
        while(cin>>n && n)
        {
            v.pb(n);
        }
        p=v.size();
        sort(v.rbegin(),v.rend());
        fi(i,0,p)
        {
            ans+=2*(powl(v[i],i+1));
            if(ans>5000000)
            {
                cout<<"Too expensive"<<endl;
                break;
            }
        }
        if(ans<=5000000)
        {
            cout<<ans<<endl;
        }
        v.clear();
    }
    return 0;
}
