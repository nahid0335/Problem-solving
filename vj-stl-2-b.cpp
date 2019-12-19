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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,m,p=0;
        cin>>n;
        m=n;
        vc(int)v;
        while(m--)
        {
            ll x;
            cin>>x;
            v.pb(x);
        }
        if(next_permutation(v.begin(),v.end()))
        {
            for(i=0;i<n;i++)
            {
                cout<<v[i];
            }
        }
        else
            cout<<"-1";
        v.clear();
        cout<<endl;
    }
    return 0;
}
