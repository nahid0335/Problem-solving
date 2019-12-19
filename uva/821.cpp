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
    int x,y,z=0;
    while(cin>>x>>y && x)
    {
        z++;
        int v[102][102];
        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                if(i==j)
                    v[i][j]=0;
                else
                    v[i][j]=mx;
            }
        }
        v[x][y]=1;
        while(cin>>x>>y && x)
        {
            v[x][y]=1;
        }
        for(int k=0;k<101;k++)
        {
            for(int i=0;i<101;i++)
            {
                for(int j=0;j<101;j++)
                {
                    if(v[i][j]>v[i][k]+v[k][j])
                    {
                        v[i][j]=v[i][k]+v[k][j];
                    }
                }
            }
        }
        du sum=0,dum=0;
        for(int i=0;i<101;i++)
        {
            for(int j=0;j<101;j++)
            {
                if(i!=j && v[i][j]!=mx)
                {
                    sum++;
                    dum+=v[i][j];
                }
            }
        }
        cout<<"Case "<<z<<": average length between pages = "<<fixed<<setprecision(3)<<dum/sum<<" clicks"<<endl;
    }
}
