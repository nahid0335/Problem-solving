#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define du double
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
#define fi(j,k,n) for(ll j=k;j<n;j++)
#define fd(j,k,n) for(ll j=k;j<n;j--)
#define vc(v,a) vector<a>v
#define pb push_back
#define mset(a) memset(a,0,sizeof(a))
#define pr(a,s) pair<a,s>
#define st(a) sort(a.begin(),a.end())
#define mp(a,b) make_pair(a,b)

int main()
{
   // read;
   // write;
    ll t;
    string s,str,sp;
    cin>>t;
    getchar();
    while(t--)
    {
        vc(v1,int);
        vc(v2,string);
        vc(v3,pr(int,string) );
        ll a,c=0;
        getchar();
        getline(cin,s);
        stringstream ss(s);
        while(ss>>a)
            v1.pb(a);
        getline(cin,sp);
        stringstream sa(sp);
        while(sa>>str)
            v2.pb(str);
        int len=min(v1.size(),v2.size());
        fi(i,0,len)
        {
            v3.pb(mp(v1[i],v2[i]));
        }
        st(v3);
        fi(i,0,len)
        {
            cout<<v3[i].second<<endl;
        }
        v1.clear();
        v2.clear();
        v3.clear();
        if(t)
            cout<<endl;
    }
    return 0;
}
