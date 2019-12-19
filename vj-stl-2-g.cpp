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
int ar[30050];
ll n;
int main()
{
    read;
    write;
    ll t,i=0;
    cin>>t;
    while(i<t)
    {
        i++;
        ll j,ma=0,tp,area=0;
        cin>>n;
        stack<int>s;
        fi(j,0,n)
            cin>>ar[j];
        j=0;
        while(j<n)
        {
            if(s.empty()||(ar[j]>=ar[s.top()]))
            {
                s.push(j);
                j++;
            }
            else
            {
                tp=s.top();
                s.pop();
                area=ar[tp]*(s.empty()?j:j-s.top()-1);
                ma=max(ma,area);
            }
        }
        while(!s.empty())
        {
            tp=s.top();
            s.pop();
            area=ar[tp]*(s.empty()?j:j-s.top()-1);
            ma=max(ma,area);
        }
        cout<<"Case "<<i<<": "<<ma<<endl;
    }
    return 0;
}
