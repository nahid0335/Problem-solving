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
#define mset(a) memset(a,1,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)
#define n 20000001
bool a[n];
int main()
{
    write;
    mset(a);
    a[0]=0;
    a[1]=0;
    for(ll i=4;i<n;i+=2)
        a[i]=0;
    for(ll i=3;i*i<n;i+=2)
    {
        if(a[i])
        {
            for(ll j=i*i;j<n;j+=(2*i))
                a[j]=0;
        }
    }
    for(ll i=3;i<n;i+=2)
    {
        if(a[i]==1&&a[i-2]==1)
        cout<<"{"<<i-2<<","<<i<<"},";
    }
    return 0;
}
