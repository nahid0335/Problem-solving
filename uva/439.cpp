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

int fx[]= {-1,-2,-2,-1,1,2,2,1};
int fy[]= {-2,-1,1,2,2,1,-1,-2};
int vis[9][9];
int level[9][9];
void bfs(int x,int y,int r,int c)
{
    memset(vis,0,sizeof(vis));
    memset(level,-1,sizeof(level));
    queue<pair<int,int> >q;
    vis[x][y]=1;
    level[x][y]=0;
    q.push(mp(x,y));
    while(!q.empty())
    {
        pair<int,int>top;
        top=q.front();
        q.pop();
        for(int i=0; i<8; i++)
        {
            int u=top.first+fx[i];
            int v=top.second+fy[i];
            if(u>0&&u<9 && v>0 && v<9 && vis[u][v]==0)
            {
                vis[u][v]=1;
                level[u][v]=level[top.first][top.second]+1;
                q.push(mp(u,v));
               // cout<<level[u][v]<<" "<<u<<","<<v<<endl;
            }
        }
    }
}
int main()
{
    string s,s1;
    while(cin>>s>>s1)
    {
        int r1=s[1]-'0';
        int r2=s1[1]-'0';
        int c1=s[0]-'a'+1;
        int c2=s1[0]-'a'+1;
        bfs(r1,c1,r2,c2);
        cout<<"To get from "<<s<<" to "<<s1<<" takes "<<level[r2][c2]<<" knight moves."<<endl;
    }
}
