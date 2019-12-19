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
    string s;
    while(cin>>s)
    {
        int sum=0;
        string s1="";
        int len=s.size();
        if(s[0]>='0' && s[0]<='9')
        {
            ll c=0;
            for(ll i=len-1;i>=0;i--)
            {
                int x=s[i]-'0';
                x=x*powl(10,c);
                c++;
                if(x>=1 && x<=9)
                {
                    if(x>=5 && x!=9)
                    {
                        for(int j=0;j<x-5;j++)
                        {
                            s1+='I';
                        }
                        s1+='V';
                    }
                    else if(x<5 && x!=4)
                    {
                        for(int j=0;j<x;j++)
                        {
                            s1+='I';
                        }
                    }
                    else if(x==4)
                    {
                        s1+='V';
                        s1+='I';
                    }
                    else
                    {
                        s1+='X';
                        s1+='I';
                    }
                }
                else if(x>=10 && x<=90)
                {
                    if(x>=50 && x!=90)
                    {
                        for(int j=0;j<(x-50)/10;j++)
                        {
                            s1+='X';
                        }
                        s1+='L';
                    }
                    else if(x<50 && x!=40)
                    {
                        for(int j=0;j<x/10;j++)
                        {
                            s1+='X';
                        }
                    }
                    else if(x==40)
                    {
                        s1+='L';
                        s1+='X';
                    }
                    else
                    {
                        s1+='C';
                        s1+='X';
                    }
                }
                else if(x>=100 && x<=900)
                {
                    if(x>=500 && x!=900)
                    {
                        //cout<<x<<endl;
                        for(int j=0;j<(x-500)/100;j++)
                        {
                            s1+='C';
                        }
                        s1+='D';
                    }
                    else if(x<500 && x!=400)
                    {
                        for(int j=0;j<x/100;j++)
                        {
                            s1+='C';
                        }
                    }
                    else if(x==400)
                    {
                        s1+='D';
                        s1+='C';
                    }
                    else if(x==900)
                    {
                        s1+='M';
                        s1+='C';
                    }
                }
                else if(x>=1000)
                {
                    for(int j=0;j<x/1000;j++)
                        s1+='M';
                }
            }
            reverse(s1.begin(),s1.end());
            cout<<s1<<endl;
            s1.clear();
        }
        else
        {
            for(int i=0;i<len;i++)
            {
                if(s[i]=='I')
                {
                    if((i<len-1)&&(s[i+1]=='V'))
                    {
                        sum+=4;
                        i++;
                    }
                    else if((i<len-1)&&(s[i+1]=='X'))
                    {
                        sum+=9;
                        i++;
                    }
                    else
                        sum++;
                }
                else if(s[i]=='X')
                {
                    if((i<len-1)&&(s[i+1]=='L'))
                    {
                        sum+=40;
                        i++;
                    }
                    else if((i<len-1)&&(s[i+1]=='C'))
                    {
                        sum+=90;
                        i++;
                    }
                    else
                        sum+=10;
                }
                else if(s[i]=='C')
                {
                    if((i<len-1)&&(s[i+1]=='D'))
                    {
                        sum+=400;
                        i++;
                    }
                    else if((i<len-1)&&(s[i+1]=='M'))
                    {
                        sum+=900;
                        i++;
                    }
                    else
                        sum+=100;
                }
                else if(s[i]=='V')
                    sum+=5;
                else if(s[i]=='L')
                    sum+=50;
                else if(s[i]=='D')
                    sum+=500;
                else
                    sum+=1000;
            }
            cout<<sum<<endl;
        }
    }
}
