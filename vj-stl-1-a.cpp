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
du g=9.81;
int main()
{
    du k,l,s,w;
    while(cin>>k>>l>>s>>w)
    {
        if(k==0 && l==0 && s==0 && w==0)
            break;
        du v,eng;
        if(l>=s)
        {
            v=sqrt(2*g*s);
            if(v>10)
            {
                cout<<"Killed by the impact."<<endl;
            }
            else
                cout<<"James Bond survives."<<endl;
        }
        else
        {
            eng=w*g*s-.5*k*(s-l)*(s-l);
            if(eng<0)
            {
                cout<<"Stuck in the air."<<endl;
            }
            else
            {
                v=sqrt(2*eng/w);
                if(v>10)
                {
                    cout<<"Killed by the impact."<<endl;
                }
                else
                    cout<<"James Bond survives."<<endl;
            }
        }
    }
    return 0;
}
