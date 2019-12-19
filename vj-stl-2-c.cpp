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
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        queue<char>n;
        stack<char>m;
        cin>>s;
        ll len=s.size();
        ll i;
        fi(i,0,len)
        {
            if(isalpha(s[i]))
            {
                n.push(s[i]);
            }
            else if(s[i]!=')')
            {
                m.push(s[i]);
            }
            else
            {
                while(m.top()!='(')
                {
                    n.push(m.top());
                    m.pop();
                }
                m.pop();
            }
        }
        ll x=n.size();
        fi(i,0,x)
        {
            cout<<n.front();
            n.pop();
        }
        cout<<endl;
    }
    return 0;
}
