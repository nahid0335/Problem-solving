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
#include<limits.h>
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
#define mx 100000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

map<string,int>m;
int main()
{
    ll n,p=-10;
    string s,a;
    cin>>n;
    cin>>s;
    for(ll i=0;i<n-1;i++)
    {
        string s1;
        s1=s.substr(i,2);
        m[s1]++;
      //  cout<<s1<<endl;
    }
    map<string,int>::iterator it;
    for(it=m.begin();it!=m.end();++it)
    {
      //  cout<<it->first<<" "<<it->second<<endl;
        if(p<it->second)
        {
            p=it->second;
            a=it->first;
        }
    }
    cout<<a;
}
