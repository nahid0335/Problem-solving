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
#include<bitset>
#include<utility>
#include<iterator>
#include<functional>
#include<bits/stdc++.h>
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
#define n 20000005
ll m[n];
bool a[n];
void prime()
{
    a[0]=1;
    a[1]=1;
    for(ll i=2;i*i<=n;i=(i==2?3:i+2))
    {
        if(a[i]==0)
        {
            for(ll j=i*i;j<n;j+=(2*i))
                a[j]=1;
        }
    }
    ll j=1;
    for(ll i=2;i<n;i++)
    {
        if(a[i]==0 && a[i+2]==0)
        {
            m[j]=i;
            j++;
        }
    }

}
int main()
{
    read;
    write;
    prime();
    ll x;
    while(cin>>x)
    {
        cout<<"("<<m[x]<<", "<<m[x]+2<<")"<<endl;
    }
    return 0;
}
