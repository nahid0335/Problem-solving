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
    string s;
    cin>>s;
    stack<int>st;
    ll len,i,x;
    len=s.size();
    fi(i,0,len)
    {
        if(isdigit(s[i]))
        {
            x=st.top();
            st.pop();
            st.push(x*(s[i]-'0'));
        }
        else if(s[i]=='(')
        {
            st.push(-4);
        }
        else if(s[i]==')')
        {
            x=0;
            while(!st.empty()&& st.top()!=-4)
            {
                x+=st.top();
                st.pop();
            }
            st.pop();
            st.push(x);
        }
        else if(isalpha(s[i]))
        {
            if(s[i]=='C')
                x=12;
            else if(s[i]=='O')
                x=16;
            else
                x=1;
            st.push(x);
        }
    }
    x=0;
    while(!st.empty())
        {
            x+=st.top();
            st.pop();
        }
        cout<<x<<endl;
    return 0;
}
