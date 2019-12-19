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

map<string,int>visited;
int bfs(string s1,string s2,map<string,vector<string> >m)
{
    visited[s1]=0;
    queue<string>q;
    q.push(s1);
    while(!q.empty())
    {
        string a,s=q.front();
        q.pop();
        if(s==s2)
            return visited[s];
        ll len=m[s].size();
        for(ll i=0;i<len;i++)
        {
            a=m[s][i];
            if(!visited.count(a))
            {
                visited[a]=visited[s]+1;
                q.push(a);
            }
        }
    }
}
int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        string s;
        map<string,vector<string> >m;
        while(cin>>s && s!="*")
        {
            m[s];
            int l1=s.size(),d=0;
            map<string,vector<string> >::iterator it;
            for(it=m.begin();it!=m.end();++it)
            {
                string q=it->first;
                int b=q.size();
                if(b==l1)
                {
                    for(ll i=0;i<b &&d<2;i++)
                    {
                        if(s[i]!=q[i])
                            d++;
                    }
                }
                if(d==1)
                {
                    m[s].pb(q);
                    m[q].pb(s);
                }
                d=0;
            }
        }
        string s1,s2,s3;
        getline(cin,s3);
        while(getline(cin,s3)&& s3!="")
        {
            stringstream s(s3);
            s>>s1>>s2;
            visited.clear();
            cout<<s1<<" "<<s2<<" "<<bfs(s1,s2,m)<<endl;
        }
        if(n!=0)
            cout<<endl;
    }
}
