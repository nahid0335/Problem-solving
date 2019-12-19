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
ll m;
bool cmp(int a,int b)
{
    if(a%m!=b%m)
        return a%m<b%m;
    else
    {
        if(abs(a)%2==0 && abs(b)%2==0)
            return a<b;
        else if(abs(a)%2!=0 && abs(b)%2!=0)
            return a>b;
        else if(abs(a)%2!=0)
            return true;
        else
            return false;
    }
}
int main()
{
    read;
    write;
    ll n,x;
    while(cin>>n>>m)
    {
        cout<<n<<" "<<m<<endl;
        if(n==0 && m==0)
        {
            break;
        }
        vc(int)v;
        for(ll i=1;i<=n;i++)
        {
            cin>>x;
            v.pb(x);
        }
        vector<int>::iterator it;
        sort(v.begin(),v.end(),cmp);
        for(it=v.begin();it!=v.end();it++)
        {
            cout<<(*it)<<endl;
        }
        v.clear();
    }
    return 0;
}
