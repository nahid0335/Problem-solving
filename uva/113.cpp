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
    ll n;
    while(cin>>n)
    {
        string s,s1;
        ll x=0;
        cin>>s;
        ll c=0;
        while(1)
        {
            ll i=0;
            while(s[i]!='\0')
            {
                x+=s[i]-'0';
                if((x/n)>0)
                {
                    s1+='0'+(x/n);
                   cout<<s1<<endl;
                    x=x%n;
                }
                x*=10;
                cout<<x<<endl;
                i++;
            }
            if(x!=0)
                break;
            c++;
            s=s1;
            s1.clear();
        }
        cout<<c<<endl;
    }
    return 0;
}
