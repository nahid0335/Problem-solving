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
#define mx 1000000000
#define chk(n) (p[n>>6]&(1<<((n>>1)&31)))
#define sset(n) (p[n>>6]|=(1<<((n>>1)&31)))

int main()
{
    read;
    write;
    int n;
    while(cin>>n)
    {
        int v[105][105];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(i==j)
                {
                    v[i][j]=0;
                }
                else
                {
                    string s;
                    cin>>s;
                    if(s=="x")
                    {
                        v[i][j]=mx;
                        v[j][i]=mx;
                    }
                    else
                    {
                        int d=atoi(s.c_str());
                        v[i][j]=d;
                        v[j][i]=d;
                    }
                }
            }
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(v[i][j]>v[i][k]+v[k][j])
                        v[i][j]=v[i][k]+v[k][j];
                }
            }
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=max(sum,v[0][i]);
        }
        cout<<sum<<endl;
    }
}
