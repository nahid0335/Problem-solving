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

int main()
{
    string s,s1="",s2="";
    cin>>s;
    ll len=s.size();
    bool f=1;
    s1+=s[0];
    bool t=0;
    for(ll i=1;i<len;i++)
    {
        if(s[i]=='a' && s[i+1]=='t' && f && i<len-2)
        {
            s1+='@';
            f=0;
            i++;
        }
        else
            s1+=s[i];
    }
       // s1+=s[len-2];
       // s1+=s[len-1];
    //cout<<s1<<endl;
    s2+=s1[0];
    len=s1.size();
    f=1;
    for(ll i=1;i<len;i++)
    {
        f=0;
        if(s1[i]=='d'&&s1[i+1]=='o'&&s1[i+2]=='t' && i<len-3)
        {
            s2+='.';
            i+=2;
        }
        else
        {
            s2+=s1[i];
        }
    }
    if(f)
        s2=s1;
    cout<<s2;
}
