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
    string s;
    int v[1000];
    vc(string)vs;
    mset(v);
    while(getline(cin,s))
    {
        ll x=0,i=0,j=0;
        int c=0;
        string sn="";
        while(s[i]!='\0')
        {
            if(s[i]!=' ')
            {
                c++;
                x=1;
                sn+=s[i];
            }
            else if(x==1)
            {
                if(v[j]<c)
                    v[j]=c;
                j++;
                x=0;
                c=0;
                sn+=' ';
            }
            i++;
        }
        if(v[j]<c)
                    v[j]=c;
        vs.pb(sn);
    }
    for(ll i=0;i<vs.size();i++)
    {
        cout<<vs[i]<<endl;
    }
}
