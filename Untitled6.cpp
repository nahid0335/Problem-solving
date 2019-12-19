#include<cstdio>
#include<iomanip>
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
int a[1000005];
int s=1;
int main()
{
    int a1[1000005],a2[1000005],a3[1000005],a4[1000005],a5[1000005],a6[1000005],a7[1000005],a8[1000005],a9[1000005];
    for(ll i=1;i<1000005;i++)
    {
        ll x=i;
        while(x)
        {
            ll m=x%10;
            if(m!=0)
            {
                s*=m;
            }
            x/=10;
        }
       // cout<<s<<endl;
        if(s<10||a[s])
        {
            if(a[s])
            {
                a[i]=a[s];
                if(a[s]==1)
                {
                    a1[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[s]==2)
                {
                    a2[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[s]==3)
                {
                    a3[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[s]==4)
                {
                    a4[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
                else if(a[s]==5)
                {
                    a5[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[s]==6)
                {
                    a6[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[s]==7)
                {
                    a7[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[s]==8)
                {
                    a8[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
                else if(a[s]==9)
                {
                    a9[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
            }
            else
                {
                    a[i]=s;
                     if(a[i]==1)
                {
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[i]==2)
                {
                    //a2[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[i]==3)
                {
                    //a3[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[i]==4)
                {
                    //a4[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
                else if(a[i]==5)
                {
                    //a5[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[i]==6)
                {
                    //a6[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[i]==7)
                {
                    //a7[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
               else if(a[i]==8)
                {
                    //a8[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
                else if(a[i]==9)
                {
                    //a9[i]=1;
                    a1[i]=a1[i]+a1[i-1];
                    a2[i]=a2[i]+a2[i-1];
                    a3[i]=a3[i]+a3[i-1];
                    a4[i]=a4[i]+a4[i-1];
                    a5[i]=a5[i]+a5[i-1];
                    a6[i]=a6[i]+a6[i-1];
                    a7[i]=a7[i]+a7[i-1];
                    a8[i]=a8[i]+a8[i-1];
                    a9[i]=a9[i]+a9[i-1];
                }
                }
            s=1;
        }
    }
    ll n;
    scanf("%lld",&n);
    ll r,b,m,c=0;
    for(ll i=0;i<n;i++)
    {
        c=0;
        scanf("%lld %lld %lld",&r,&b,&m);
        if(m==1)
        {
            c=a1[b]-a1[r];
        }
        else if(m==2)
        {
            c=a2[b]-a2[r];
        }
         else if(m==3)
        {
            c=a3[b]-a3[r];
        }
         else if(m==4)
        {
            c=a4[b]-a4[r];
        }
         else if(m==5)
        {
            c=a5[b]-a5[r];
        }
         else if(m==6)
        {
            c=a6[b]-a6[r];
        }
         else if(m==7)
        {
            c=a7[b]-a7[r];
        }
         else if(m==8)
        {
            c=a8[b]-a8[r];
        }
         else if(m==9)
        {
            c=a9[b]-a9[r];
        }
        printf("%lld\n",c);
    }
}
