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
    ll k=0;
    while(k<t)
    {
        k++;
        cout<<"Problem #"<<k<<endl;
        string s,s1="";
        getline(cin,s);
        while (s.length()==0 )
            getline(cin, s);
        du U=0,I=0,P=0;
        ll len=s.size();
        for(ll i=0;i<len;i++)
        {
            if(s[i]=='=')
            {
                if(s[i-1]=='U')
                {
                    for(i++;;i++)
                    {
                        if((s[i]>='0'&& s[i]<='9')||s[i]=='.')
                            s1+=s[i];
                        else
                            break;
                    }
                    U=atof(s1.c_str());
                    s1.clear();
                    if(s[i]!='V')
                    {
                        if(s[i]=='m')
                            U*=.001;
                        else if(s[i]=='k')
                            U*=1000;
                        else
                            U*=1000000;
                        i++;
                    }
                }
                else if(s[i-1]=='I')
                {
                    for(i++;;i++)
                    {
                        if((s[i]>='0'&& s[i]<='9')||s[i]=='.')
                            s1+=s[i];
                        else
                            break;
                    }
                    I=atof(s1.c_str());
                    s1.clear();
                    if(s[i]!='A')
                    {
                        if(s[i]=='m')
                            I*=.001;
                        else if(s[i]=='k')
                            I*=1000;
                        else
                            I*=1000000;
                        i++;
                    }
                }
                else if(s[i-1]=='P')
                {
                    for(i++;;i++)
                    {
                        if((s[i]>='0'&& s[i]<='9')||s[i]=='.')
                            s1+=s[i];
                        else
                            break;
                    }
                    P=atof(s1.c_str());
                    s1.clear();
                    if(s[i]!='W')
                    {
                        if(s[i]=='m')
                            P*=.001;
                        else if(s[i]=='k')
                            P*=1000;
                        else
                            P*=1000000;
                        i++;
                    }
                }
            }
        }
        if(!P)
        {
            P=U*I;
            cout<<"P="<<fixed<<setprecision(2)<<P<<"W"<<endl<<endl;
        }
        else if(!I)
        {
            I=P/U;
            cout<<"I="<<fixed<<setprecision(2)<<I<<"A"<<endl<<endl;
        }
        else
        {
            U=P/I;
            cout<<"U="<<fixed<<setprecision(2)<<U<<"V"<<endl<<endl;
        }
    }
}
