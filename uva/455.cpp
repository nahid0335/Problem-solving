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
    while(t--)
    {
        string s,st="";
        cin>>s;
        ll len=s.size();
        st+=s[0];
        ll len1=st.size();
        ll i=0;
        while(len1<=len)
        {
            ll c=0,n=0;
            while(1)
            {
                n=s.find(st,n);
                //cout<<n<<endl;
                if(n!=string::npos)
                    c++;
                else
                    break;
                n+=len1;
            }
           // cout<<c<<endl;
            if((len1*c)==len)
            {
                break;
            }
            i++;
            st+=s[i];
            len1++;
           // cout<<"s:"<<st<<" "<<"len1:"<<len1<<endl;
        }
        if(t==0)
            cout<<len1<<endl;
        else
            cout<<len1<<endl<<endl;
    }
}
