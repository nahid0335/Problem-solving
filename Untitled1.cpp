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

#define int long long int
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
//int par[100005];
//int a[100005];
/*void mkset()
{
    for(int i=0;i<100005;i++)
        par[i]=i;
}
int f(int r)
{
    if(par[r]==r)
        return r;
    return par[r]=f(par[r]);
}
void uni(int c,int b)
{
    int x=f(c);
    int y=f(b);
    if(x!=y)
    {
        par[x]=y;
        a[y]++;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<string,int>m;
        int c=0;
        mkset();
        for(int i=0;i<100005;i++)
            a[i]=1;
        for(int i=0;i<n;i++)
        {
            string s1,s2;
            cin>>s1>>s2;
            if(!m[s1])
            {
                m[s1]=c;
                c++;
            }
            if(!m[s2])
            {
                m[s2]=c;
                c++;
            }
            uni(m[s1],m[s2]);
            int r=f(m[s1]);
            cout<<a[r]<<endl;
        }
    }
}*/
int main()
{
    cout<<"j"<<endl;
    return 0;
}
