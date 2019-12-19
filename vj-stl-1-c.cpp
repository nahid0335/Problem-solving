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

struct node
{
    int p,d;
};
struct cmp
{
    bool operator()(node a,node b)
    {
        if(a.p==b.p)
            return a.d>b.d;
        return a.p>b.p;
    }
};
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        priority_queue<node,vector<node>,cmp>q;
        node st;
        fi(i,0,n)
        {
            cin>>st.p>>st.d;
            q.push(st);
        }
        ll c=0;
        while(!q.empty())
        {
            st=q.top();
            q.pop();
            c++;
            if(c%2)
            {
                st.p+=st.d;
                q.push(st);
            }
        }
        cout<<st.p<<endl;
    }
    return 0;
}
