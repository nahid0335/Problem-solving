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
    ll n1,n2,n;
    priority_queue<int,vector<int>,greater<int> >q1;
    priority_queue<int,vector<int>,less<int> >q2;
    while(scanf("%lld %lld %lld",&n1,&n2,&n)==3)
    {
        if(n1==0 && n2==0 && n==0)
            break;
        ll i,j,k,x;
        du ans,a1,a2;
        ans=i=j=0,k=n;
        while(k--)
        {
            scanf("%lld",&x);
            ans+=x;
            if(i<n1)
            {
                q1.push(x);
                i++;
            }
            else if(q1.top()<x)
            {
                q1.pop();
                q1.push(x);
            }
            if(j<n2)
            {
                q2.push(x);
                j++;
            }
            else if(q2.top()>x)
            {
                q2.pop();
                q2.push(x);
            }
            fi(i,0,n1)
            {
                a1-=q1.top();
                q1.pop();
            }
            fi(j,0,n2)
            {
                a2-=q2.top();
                q2.pop();
            }
            ans-=a1+a2;
            n-=n1+n2;
            printf("%.6f\n",du(ans)/du(n));
        }
    }
    return 0;
}
