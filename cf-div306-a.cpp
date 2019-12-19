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
    string s;
    cin>>s;
    ll x=1,y=1,c=0;
    ll len=s.size();
    for(ll i=0;i<len-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            for(ll j=i+2;j<len-1;j++)
            {
                if(s[j]=='B'&& s[j+1]=='A')
                {
                    cout<<"YES";
                    return 0;
                }
            }
            break;
        }
    }
    for(ll i=0;i<len-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            for(ll j=i+2;j<len-1;j++)
            {
                if(s[j]=='A' && s[j+1]=='B')
                {
                    cout<<"YES";
                        return 0;
                }
            }
            break;
        }
    }
    cout<<"NO";
}
