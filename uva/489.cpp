#include<cstdio>
#include<iomanip>
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
    ll n;
    while(cin>>n)
    {
        if(n==-1)
            break;
        cout<<"Round "<<n<<endl;
        string s1,s2;
        cin>>s1>>s2;
        int v[27]={};
        ll l1=0,l2=0,f=0,c=0;
        for(ll i=0;i<s1.size();i++)
        {
            ll x=s1[i]-'a';
            if(!v[x])
            {
                l1++;
                v[x]++;
            }
        }
        int p[27]={};
        for(ll i=0;i<s2.size();i++)
        {
            ll x=s2[i]-'a';
            if(v[x] && !p[x])
            {
                v[x]=0;
                p[x]=1;
                c++;
                //l2=0;
            }
            else if(!v[x] && !p[x])
            {
                l2++;
                p[x]=1;
            }
            if(l1==c)
            {
                cout<<"You win."<<endl;
                f=1;
                break;
            }
            if(l2==7)
            {
                cout<<"You lose."<<endl;
                f=1;
                break;
            }
           // cout<<l2<<" ";
        }
        if(!f)
            cout<<"You chickened out."<<endl;
    }
}
