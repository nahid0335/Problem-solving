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

char s[21][21];
int ax[]={0,-1,0,1};
int ay[]={-1,0,1,0};
int vis[21][21];
int h,w;
void bfs(int x,int y)
{
    for(int i=0;i<21;i++)
    {
        for(int j=0;j<21;j++)
        {
            vis[i][j]=0;
        }
    }
    vis[x][y]=1;
    queue<pair<int,int> >q;
    q.push(mp(x,y));
    while(!q.empty())
    {
        pr(int,int)v;
        v=q.front();
        q.pop();
        for(int i=0;i<4;i++)
        {
            int bx=ax[i]+v.first;
            int by=ay[i]+v.second;
            if(!vis[bx][by] && s[bx][by]!='#' && bx>=0 && bx<h && by>=0 && by<w)
            {
                vis[bx][by]=1;
                q.push(mp(bx,by));
            }
        }
    }
}
int main()
{
    read;
    write;
    int t,z=0;
    cin>>t;
    while(z<t)
    {
        z++;
        int x,y;
        cin>>w>>h;
        for(int i=0;i<h;i++)
        {
            for(int j=0;j<w;j++)
            {
                cin>>s[i][j];
                if(s[i][j]=='@')
                {
                    x=i;
                    y=j;
                }
            }
        }
        bfs(x,y);
        int sum=0;
        for(int i=0;i<21;i++)
        {
            for(int j=0;j<21;j++)
            {
                if(vis[i][j])
                    sum++;
            }
        }
        cout<<"Case "<<z<<": "<<sum<<endl;
    }
}
