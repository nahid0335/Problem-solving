#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
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
    map<char,int>m;
    m['B']=1;
    m['F']=1;
    m['P']=1;
    m['V']=1;
    m['C']=2;
    m['G']=2;
    m['J']=2;
    m['K']=2;
    m['Q']=2;
    m['S']=2;
    m['X']=2;
    m['Z']=2;
    m['D']=3;
    m['T']=3;
    m['L']=4;
    m['M']=5;
    m['N']=5;
    m['R']=6;
    string s;
    while(cin>>s)
    {
        int len=s.size(),i;
        if(m[s[0]]>=1&&m[s[0]]<=6)
            cout<<m[s[0]];
        fi(i,1,len)
        {
            if(m[s[i]]>=1 && m[s[i]]<=6)
                if(m[s[i]]!=m[s[i-1]])
                    cout<<m[s[i]];
        }
        cout<<endl;
    }
    return 0;
}
