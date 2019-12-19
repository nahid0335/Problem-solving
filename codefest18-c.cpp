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
    string a,b,a1,b1;
    cin>>n;
    cin>>a>>b;
    a1=a;
    b1=b;
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            sum1++;
    }
    int f,t=0,tp=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            f=0;
            for(int j=i+1;j<n;j++)
            {
                if((a[j]!=b[j])&&(a[i]!=a[j]))
                {
                    f=1;
                    sum2+=(j-i);
                    swap(a[i],a[j]);
                    t=1;
                    break;
                }
            }
        }
    }
    if(!f)
        sum2++;
    for(int i=n-1;i>=0;i--)
    {
        if(a1[i]!=b1[i])
        {
            f=0;
            for(int j=i-1;j>=0;j--)
            {
                if((a1[j]!=b1[j])&&(a1[i]!=a1[j]))
                {
                   // cout<<a1[i]<<" "<<a1[j]<<endl;
                    f=1;
                    sum3+=(i-j);
                    swap(a1[i],a1[j]);
                    tp=1;
                    break;
                }
            }
        }
    }
    if(!f)
        sum3++;
    if(!t&& !tp)
        cout<<sum1;
    else
        cout<<min(sum1,min(sum2,sum3));
   // cout<<sum1<<" "<<sum2<<" "<<sum3;
}
