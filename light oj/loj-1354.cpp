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
    //read;
    //write;
    ll t;
    cin>>t;
    ll z=0;
    while(t--)
    {
        z++;
        ll a[4],f=1;
        scanf("%lld.%lld.%lld.%lld",&a[0],&a[1],&a[2],&a[3]);
        string s,s1="";
        cin>>s;
        ll len=s.size();
        for(ll i=0,j=0,k=0;i<len;i++,j++)
        {
            if(j==7)
            {
                s1+=s[i];
                i++;
                j=-1;
                ll sum=0;
                ll p=8;
                ll c=0;
                while(p--)
                {
                    if(s1[p]=='1')
                    {
                        sum+=(powl(2,c));
                    }
                    c++;
                }
                //cout<<sum<<endl;
                if(sum!=a[k])
                {
                    f=0;
                    break;
                }
                k++;
                s1.clear();
            }
            else
            {
                s1+=s[i];
            }
        }
        if(f)
        {
            cout<<"Case "<<z<<": Yes"<<endl;
        }
        else
            cout<<"Case "<<z<<": No"<<endl;
    }
}
