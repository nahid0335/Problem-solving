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

map<string,int>visited;
int bfs(string s1,string s2,map<string,vector<string> >v)
{
    queue<string>q;
    q.push(s1);
    visited[s1]=0;
    while(!q.empty())
    {
        string a=q.front();
        q.pop();
        if(a==s2)
            return visited[a];
        ll n=v[a].size();
        for(ll i=0;i<n;i++)
        {
            string m=v[a][i];
            if(!visited.count(m))
            {
                visited[m]=visited[a]+1;
                q.push(m);
            }
        }
    }
}
int main()
{
    read;
    write;
    ll n;
    cin>>n;
    while(n--)
    {
        map<string,vector<string> >v;
        string a;
        while(cin>>a && a!="*")
        {
            v[a];
            ll ta=a.size();
            map<string,vector<string> >::iterator it;
            for(it=v.begin();it!=v.end();++it)
            {
                string b=it->first;
                ll tv=b.size(),d=0;
                if(ta==tv)
                {
                    for(ll i=0;i<tv && d<2;i++)
                    {
                        if(a[i]!=b[i])
                            d++;
                    }
                }
                if(d==1)
                {
                    v[a].pb(b);
                    v[b].pb(a);
                }
            }
        }
        string s1,s2,s3;
        getline(cin,s3);
        while(getline(cin,s3)&& s3!="")
        {
            stringstream s(s3);
            s>>s1>>s2;
            visited.clear();
            ll ans=bfs(s1,s2,v);
            cout<<s1<<" "<<s2<<" "<<ans<<endl;
        }
        if(n!=0)
            cout<<endl;
    }
}
