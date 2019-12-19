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

int main()
{
    read;
    write;
    string s;
    int v[1001];
    vc(string)vs;
    mset(v);
    while(getline(cin,s))
    {
        ll x=0,i=0,j=0;
        int c=0;
        string sn="";
        while(s[i]!='\0')
        {
            if(s[i]!=' ')
            {
                if(c==0&&j!=0)
                    sn+=' ';
                c++;
                sn+=s[i];
            }
            else if(c>0)
            {
                if(v[j]<c)
                    v[j]=c;
                j++;
                c=0;
            }
            i++;
        }
        if(v[j]<c)
            v[j]=c;
        vs.pb(sn);
    }
    ll len=vs.size();
    for(ll i=0, k=0,j=0,c=1;i<len;k++)
    {
        if(j==0){
        while(vs[i][j]!=' ' && vs[i][j]!='\0')
        {
            cout<<vs[i][j];
            j++;
            c++;
        }
        }
        else
        {
            cout<<" ";
            while(vs[i][j]!=' ' && vs[i][j]!='\0')
        {
            cout<<vs[i][j];
            j++;
            c++;
        }
        }
        while(c<=v[k])
        {
            if(vs[i][j]=='\0')
                break;
            cout<<" ";
            c++;
        }
        if(vs[i][j]!='\0')
        {
            j++;
        }
        else
        {
            i++;
            k=-1;
            j=0;
            cout<<endl;
        }
        c=1;
    }
    return 0;
}
