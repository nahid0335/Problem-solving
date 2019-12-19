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
    ll t;
    cin>>t;
    ll j=0;
    while(j<t)
    {
        j++;
        string s;
        ll b,c=0;
        cin>>s>>b;
        b=abs(b);
        ll len=s.size();
        for(ll i=0;i<len;i++)
        {
            if(s[i]=='-')
                i++;
            c=c*10+s[i]-'0';
            if(c>=b)
                c%=b;
       }
       if(c==0)
       {
           cout<<"Case "<<j<<": "<<"divisible"<<endl;
       }
       else
       {
           cout<<"Case "<<j<<": "<<"not divisible"<<endl;
       }
    }
}
