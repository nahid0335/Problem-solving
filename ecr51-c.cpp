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
#include<iomanip>
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
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        ll len=s.size();
        int a=0,b=0,c=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]>='a' && s[i]<='z')
                a++;
            else if(s[i]>='A' && s[i]<='Z')
                b++;
            else
                c++;
        }
        if(a && b && c)
            cout<<s<<endl;
        else
        {
            if(a==0)
            {
                if(b<=c && (b>1 || c>1))
                {
                    for(int i=0;i<len;i++)
                    {
                        if(s[i]>='0' &&s[i]<='9')
                        {
                            s[i]='a';
                            a++;
                            break;
                        }
                    }
                }
                else
                {
                    for(int i=0;i<len;i++)
                    {
                        if(s[i]>='A' &&s[i]<='Z')
                        {
                            s[i]='a';
                            a++;
                            break;
                        }
                    }
                }
            }
            if(b==0)
            {
                if(a<=c && (a>1 || c>1))
                {
                    for(int i=0;i<len;i++)
                    {
                        if(s[i]>='0' &&s[i]<='9')
                        {
                            s[i]='A';

                            b++;
                            break;
                        }
                    }
                }
                else
                {
                    for(int i=0;i<len;i++)
                    {
                        if(s[i]>='a' &&s[i]<='z')
                        {
                            s[i]='A';
                            b++;
                            break;
                        }
                    }
                }
            }
            if(c==0)
            {
                if(b<=a && (b>1 || a>1))
                {
                    for(int i=0;i<len;i++)
                    {
                        if(s[i]>='a' &&s[i]<='z')
                        {
                            s[i]='0';
                            c++;
                            break;
                        }
                    }
                }
                else
                {
                    for(int i=0;i<len;i++)
                    {
                        if(s[i]>='A' &&s[i]<='Z')
                        {
                            s[i]='0';
                            c++;
                            break;
                        }
                    }
                }
            }
            cout<<s<<endl;
        }
    }
}
