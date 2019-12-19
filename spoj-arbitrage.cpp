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


map<string,int>m;
du dis[31][31];
int main()
{
    int z=0;
    int n;
    while(cin>>n && n)
    {
        z++;
        cout<<"Case "<<z<<": ";
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            m[s]=i;
        }
        int e;
        cin>>e;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                dis[i][j]=0.0;
        }
        for(int i=0;i<e;i++)
        {
            string s1,s2;
            du d;
            cin>>s1>>d>>s2;
            dis[m[s1]][m[s2]]=d;
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(dis[i][j]<dis[i][k]*dis[k][j])
                        dis[i][j]=dis[i][k]*dis[k][j];
                }
            }
        }
        bool np=0;
        for(int i=0;i<n;i++)
        {
            if(dis[i][i]>1.0)
            {
                np=1;
                break;
            }
        }
        if(np)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        m.clear();
    }
}
