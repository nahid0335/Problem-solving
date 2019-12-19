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

struct pos
{
    int c,r;
};
int main()
{
    read;
    write;
    pos p;
    ll n,m;
    while(cin>>n>>m)
    {
        bool ar[1001][11];
        memset(ar,0,sizeof(ar));
        ll i,j,k;
        int x=0;
        map<string,int>mp;
        map<string,int>::iterator it;
        multimap<string,pos>ms;
        multimap<string,pos>::iterator itr;
        vector<int>v;
        string s;
        char delimeter(',');
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if(j!=m)
                {
                    getline(cin,s,delimeter);
                }
                else
                    getline(cin,s);
                mp[s]++;
                if(mp[s]>1)
                    x++;
                p.r=i;
                p.c=j;
                ms.insert(make_pair(s,p));
                s.clear();
            }
            getchar();
        }
        if(x>0)
        {
            cout<<"NO"<<endl;
            for(it=mp.begin();it!=mp.end();++it)
            {
                if(it->second>1)
                {
                    s=it->first;
                    for(itr=ms.begin();itr!=ms.end();++itr)
                    {
                        if(s==itr->first)
                        {
                            ar[itr->second.r][itr->second.c]=1;
                        }
                    }
                }
            }
            for(i=0;i<=n;i++)
            {
                ll y=0;
                for(j=0;j<=m;j++)
                {
                    if(ar[i][j]==1)
                        y=1;
                }
                if(y==1)
                    v.push_back(i);
            }
            ll len=v.size();
            for(i=0;i<len;i++)
            {
                if(i==len-1)
                    cout<<v[i]<<endl;
                else
                    cout<<v[i]<<" ";
            }
            v.clear();
            for(i=0;i<=n;i++)
            {
                ll y=0;
                for(j=0;j<=m;j++)
                {
                    if(ar[j][i]==1)
                        y=1;
                }
                if(y==1)
                    v.push_back(i);
            }
            len=v.size();
            for(i=0;i<len;i++)
            {
                if(i==len-1)
                    cout<<v[i]<<endl;
                else
                    cout<<v[i]<<" ";
            }
            v.clear();
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
