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
map<string,int>m;
int main()
{
    read;
    write;
    vc(string)v;
    string s1,s2,s;
    while(cin>>s)
    {
        m[s]++;
        v.pb(s);
    }
    ll len=v.size();
    for(ll i=0;i<len;i++)
    {
        ll p=v[i].size();
        for(ll j=1;j<p-1;j++)
        {
            s1=v[i].substr(0,j);
            s2=v[i].substr(j,p);
            if(m[s1] && m[s2])
            {
                cout<<v[i]<<endl;
                break;
            }
        }
    }
    return 0;
}
