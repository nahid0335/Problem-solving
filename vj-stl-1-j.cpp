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
    ll t,k=1;
    scanf("%lld",&t);
    while(k<=t)
    {
        stack<string>b;
        stack<string>f;
        printf("Case %lld:\n",k);
        k++;
        string s,s1,s2;
        b.push("http://www.lightoj.com/");
        while(cin>>s,s[0]!='Q')
        {
            if(s[0]=='V')
            {
                cin>>s2;
                cout<<s2<<endl;
                b.push(s2);
                if(!f.empty())
                    while(!f.empty())
                        f.pop();
            }
            else if(s[0]=='B')
            {
                f.push(b.top());
                b.pop();
                if(!b.empty())
                    cout<<b.top()<<endl;
                else
                {
                    printf("Ignored\n");
                    b.push(f.top());
                    f.pop();
                }
            }
            else
            {
                if(f.empty())
                    printf("Ignored\n");
                else
                {
                    cout<<f.top()<<endl;
                    b.push(f.top());
                    f.pop();
                }
            }
        }
    }
    return 0;
}
