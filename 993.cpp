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
#include<bitset>
#include<utility>
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
    cin>>t;
    while(t--)
    {
        string s;
        ll n;
        cin>>n;
        ll x=n,f=1;
        while(n>9)
        {
            ll i=9;
            x=n;
            while(i>1)
            {
                if(n%i==0)
                {
                    while(n%i==0)
                    {
                        s+=i+'0';
                        n/=i;
                    }
                }
                i--;
            }
            if(x==n)
            {
                f=0;
                break;
            }
        }
        if(f==0)
            cout<<"-1"<<endl;
        else{
                if(!s.empty()){
        reverse(s.begin(),s.end());
        cout<<s<<endl;
                }
                else
                {
                    cout<<n<<endl;
                }
        }
    }
}
