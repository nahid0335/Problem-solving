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
    ll n;
    string s;
    cin>>n;
    cin>>s;
    if(n==1)
    {
        if(s[0]=='0')
            cout<<"No";
        else
            cout<<"Yes";
    }
    else{
    ll f=1;
    ll len=s.size();
    for(ll i=0;i<len;i++)
    {
        if(i==0||i==len-1)
        {
            if(s[i]=='1')
            {
                if(i==0)
                {
                    if(s[i+1]=='1')
                    {
                        f=0;
                        break;
                    }
                }
                if(i==len-1)
                {
                    if(s[i-1]=='1')
                    {
                        f=0;
                        break;
                    }
                }
            }
            if(s[i]=='0')
            {
                if(i==0)
                {
                    if(s[i+1]=='0')
                    {
                        f=0;
                        break;
                    }
                }
                if(i==len-1)
                {
                    if(s[i-1]=='0')
                    {
                        f=0;
                        break;
                    }
                }
            }
        }
        else
        {
            if(s[i]=='1')
            {
                if(s[i-1]=='1'||s[i+1]=='1')
                {
                    f=0;
                    break;
                }
            }
            else
            {
                if(s[i-1]=='0'&&s[i+1]=='0')
                {
                    f=0;
                    break;
                }
            }
        }
    }
    if(f)
        cout<<"Yes";
    else
        cout<<"No";
}
}
