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

int main()
{
    read;
    write;
    ll t;
    while(cin>>t,t)
    {
        priority_queue<int,vector<int>,greater<int> >q;
        while(t--)
        {
            ll x;
            cin>>x;
            q.push(x);
        }
        ll n=0,sum=0;
        while(q.size()>1)
        {
            n=q.top();
            q.pop();
            n+=q.top();
            q.pop();
            sum+=n;
            q.push(n);
        }
        cout<<sum<<endl;
    }
    return 0;
}
