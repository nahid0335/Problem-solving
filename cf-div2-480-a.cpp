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
    string s;
    cin>>s;
    int a[101];
    ll len=s.size();
    ll c=0,j=0,sum=0;
    for(ll i=0;i<len;i++)
    {
        if(s[i]=='-' && i!=len-1)
            c++;
        else
        {
            if(i==len-1)
            {
                if(s[i]=='-')
                {
                    c++;
                    a[0]+=c;
                }
                else
                {
                    a[j]=c;
                    j++;
                }
            }
            else
            {
                a[j]=c;
                j++;
                c=0;
            }
        }
    }
    for(ll i=0;i<j;i++)
        sum+=a[i];
    if(sum%2==0||j==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}
