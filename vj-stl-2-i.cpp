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
    ll t,k=0;
    cin>>t;
    while(k<t)
    {
        k++;
        cout<<"Case "<<k<<":"<<endl;
        ll n,x,m,i;
        cin>>n>>m;
        deque<int>q;
        string s;
        fi(i,0,m)
        {
            cin>>s;
            if(s=="pushLeft")
            {
                cin>>x;
                if(q.size()!=n)
                {
                    q.push_front(x);
                    cout<<"Pushed in left: "<<x<<endl;
                }
                else
                {
                    cout<<"The queue is full"<<endl;
                }
            }
            else if(s=="pushRight")
            {
                cin>>x;
                if(q.size()!=n)
                {
                    q.push_back(x);
                    cout<<"Pushed in right: "<<x<<endl;
                }
                else
                {
                    cout<<"The queue is full"<<endl;
                }
            }
            else if(s=="popLeft")
            {
                if(q.size()!=0)
                {
                    x=q.front();
                    cout<<"Popped from left: "<<x<<endl;
                    q.pop_front();
                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
            else
            {
                if(q.size()!=0)
                {
                    x=q.back();
                    cout<<"Popped from right: "<<x<<endl;
                    q.pop_back();
                }
                else
                {
                    cout<<"The queue is empty"<<endl;
                }
            }
        }
    }
}
