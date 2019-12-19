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

int vis[1000000];
vector<int>v;
int sum=0;
int main()
{
    ll n;
    cin>>n;
    int a[n+1],b[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        if(!vis[b[i]])
        {
            int c=0;
            for(int j=sum;j<n;j++)
            {
                if(!vis[a[j]])
                {
                    c++;
                    vis[a[j]]=1;
                }
                if(b[i]==a[j])
                {
                    v.pb(c);
                    break;
                }
            }
            sum+=c;
        }
        else
        {
            v.pb(0);
        }
    }
    for(int i=0;i<n;i++)
    {

    }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}
