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
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll f1=s.find('G');
    ll f2=s.find('T');
    ll c=0;
    if(f1<f2)
    {
        for(ll i=f1;i<f2+1;i+=k)
        {
            if(s[i]=='#')
            {
                break;
            }
            else if(s[i]=='T')
            {
                c=1;
                break;
            }
        }
    }
    else
    {
        for(ll i=f1;i>=f2;i-=k)
        {
            if(s[i]=='#')
            {
                break;
            }
            else if(s[i]=='T')
            {
                c=1;
                break;
            }
        }
    }
    if(c)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
