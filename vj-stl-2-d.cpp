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
int v[1001];
int main()
{
    ll n;
    while(cin>>n,n)
    {
        stack<int>s;
        ll i,j=0;
        fi(i,0,n)
            cin>>v[i];
        fi(i,0,n)
        {
            while(s.size() && s.top()==j+1)
            {
                j++;
                s.pop();
            }
            if(v[i]!=j+1)
                s.push(v[i]);
            else
                j++;
        }
        while(s.size() && s.top()==j+1)
        {
            j++;
            s.pop();
        }
        if(j==n)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}
