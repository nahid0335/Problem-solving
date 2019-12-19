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
    ll n;
    cin>>n;
    string s,s1="aeiouy",s2="";
    cin>>s;
    for(ll i=0;i<n;i++)
    {
        if(s1.find(s[i])!=string::npos)
        {
            s2+=s[i];
            ll j;
            for(j=i+1;j<n;j++)
            {
                if(s1.find(s[j])==string::npos)
                {
                    s2+=s[j];
                    break;
                }
            }
            i=j;
        }
        else
        {
            s2+=s[i];
        }
    }
    cout<<s2;
}
