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
    string s;
    cin>>s;
    ll c=0,x=0,y=0,f;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='R')
        {
            x++;
            if(i==0)
                f=1;
        }
        else
            {
                y++;
                if(i==0)
                    f=0;
            }
        if(f==1 && x<y)
        {
            c++;
            f=0;
        }
        else if(f==0 && x>y)
        {
            c++;
            f=1;
        }
    }
    cout<<c;
}
