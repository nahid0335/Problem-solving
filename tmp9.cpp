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
    read;
    write;
    string s,s1="",a=" shata ",b=" hajar ",c=" lakh ",d=" kuti ";
    int j=0;
    while(cin>>s)
    {
        j++;
        int len=s.size();
         char* ptr=NULL;
        ll n=strtoll(s.c_str(),&ptr,len);
        for(int i=0; i<len; i++)
        {
            int t=len-i-1;
            if(t==2||t==9)
            {
                if(s[i]!='0')
                    s1+=(s[i]+a);
            }
            else if((t==11 || t==10 || t==4 ||t==3))
            {
                if((t==11 || t==4)&& s[i]!='0')
                    s1+=s[i];
                else if((t==10 || t==3))
                {
                    if((s[i]=='0' && s[i-1]=='0')||(i==0 && s[i]=='0'))
                    {

                    }
                    else
                        s1+=(s[i]+b);
                }
            }
            else if((t==12 || t==13 || t==6 ||t==5))
            {
                if((t==13 || t==6)&& s[i]!='0')
                    s1+=s[i];
                else if((t==12 || t==5))
                {
                    if((s[i]=='0' && s[i-1]=='0')||(i==0 && s[i]=='0'))
                    {

                    }
                    else
                        s1+=(s[i]+c);
                }
            }
            else if((t==14 || t==8 || t==7))
            {
                if((t==8)&& s[i]!='0')
                    s1+=s[i];
                else if((t==7||t==14))
                {
                    if(t==14 && s[i]!='0')
                        s1+=(s[i]+d);
                    else if((s[i]=='0' && s[i-1]=='0')||(i==0 && s[i]=='0'))
                    {
                        string f="kuti ";
                        if(n>=10000000)
                            s1+=f;
                    }
                    else
                        s1+=(s[i]+d);
                }
            }
            else
            {
                if((s[i]=='0' && s[i-1]=='0')||(t==1 && s[i]=='0')||t>1)
                {

                }
                else
                    s1+=s[i];
            }
        }
        len=s1.size();
        if(s1[len-1]==' ')
            s1.pop_back();
        cout<<setw(4)<<j<<". "<<s1<<endl;
        s1.clear();
    }
}
