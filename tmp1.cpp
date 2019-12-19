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

bool chek(string st,int n)
{
    int len=st.size();
    int a[30]={0};
    int m=len/2;
    //cout<<st<<endl;
    for(int i=0;i<len;i++)
    {
        int x=st[i]-'a';
        a[x]++;
        if(a[x]>m)
            return false;
    }
    return true;
}
int main()
{
    int n;
    string s,st="";
    cin>>n>>s;
    st+=s[0];
    bool f=0;
    for(int i=1;i<n-1;i++)
    {
        st+=s[i];
        if(chek(st,n))
        {
            f=1;
            break;
        }
    }
    if(f)
    {
        cout<<"YES"<<endl<<st<<endl;
        return 0;
    }
    else
    {
        st.clear();
        for(int i=1;i<n;i++)
        {
            for(int j=i;j<n;j++)
                st+=s[j];
           // cout<<st<<endl;
            if(chek(st,n))
            {
                f=1;
                break;
            }
            else
                st.clear();
        }
    }
    if(f)
    {
        cout<<"YES"<<endl<<st<<endl;
    }
    else
        cout<<"NO"<<endl;
}
