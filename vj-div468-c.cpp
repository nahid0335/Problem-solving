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

int main()
{
    ll m,c=0;
    cin>>m;
    int a[m];
    for(ll i=0;i<m;i++)
        cin>>a[i];
    sort(a,a+m);
    for(ll i=0,j=m-1;i<m/2;i++,j--)
    {
        ll x=a[j]-a[i];
        if(x==2)
        {
            a[j]--;
            a[i]++;
            c++;
        }
        else
            break;

    }
    cout<<m-c*2<<endl;
    for(ll i=0;i<m;i++)
        cout<<a[i]<<" ";
}
