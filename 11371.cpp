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
    string s,a;
    while(cin>>s)
    {
        st(s);
        a=s;
        if(s[0]=='0')
        {
            ll len=s.size();
            for(ll i=1;i<len;i++)
            {
                if(s[i]!='0'){
                    swap(s[0],s[i]);
                    break;
                }
            }
        }
        reverse(a.begin(),a.end());
        ll x=atoll(a.c_str());
        ll y=atoll(s.c_str());
        if(y>x)
            swap(x,y);
        cout<<x<<" - "<<y<<" = "<<x-y<<" = "<<"9 * "<<(x-y)/9<<endl;
    }
    return 0;
}
