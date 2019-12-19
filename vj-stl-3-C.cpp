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
    set<string>a;
    set<string>::iterator it;
    while(cin>>s)
    {
        ll len=s.size();
        string sc="";
        for(ll i=0;i<len;i++)
        {
            char b=tolower(s[i]);
            if(b>='a' && b<='z')
                sc+=b;
            else if(sc!="")
            {
                a.insert(sc);
                sc="";
            }
        }
        if(sc!="")
            a.insert(sc);
        sc="";
    }
    for(it=a.begin();it!=a.end();++it)
    {
        cout<<(*it)<<endl;
    }
    return 0;
}
