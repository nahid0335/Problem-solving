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


//map<string,int>m;


int main()
{
    read;
    write;
    int n;
    while(cin>>n)
    {
        du dis[22][22][22];
        int par[22][22][22];
        mset(dis);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    cin>>dis[i][j][0];
                }
                else
                    dis[i][j][0]=1.0;
                par[i][j][0]=i;
            }
        }
        for(int z=1; z<n; z++)
        {
            for(int k=0; k<n; k++)
            {
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        du d=dis[i][k][z-1]*dis[k][j][0];
                        if(dis[i][j][z]<d)
                        {
                            dis[i][j][z]=d;
                            par[i][j][z]=k;
                        }
                    }
                }
            }
        }
        bool np=0;
        for(int j=1; j<n&& !np; j++)
        {
            for(int i=0; i<n; i++)
            {
                if(dis[i][i][j]>1.01)
                {
                    stack<int>s;
                    s.push(par[i][i][j]);
                    for(int k=j-1;k>=0;k--)
                        s.push(par[i][s.top()][k]);
                    int tmp=s.top();
                    while(!s.empty())
                    {
                        cout<<s.top()+1<<" ";
                        s.pop();
                    }
                    cout<<tmp+1<<endl;
                    np=1;
                    break;
                }
            }
        }
        if(!np)
        {
            cout<<"no arbitrage sequence exists"<<endl;
        }
       // m.clear();
    }
}
