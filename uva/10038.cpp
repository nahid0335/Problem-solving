#include<bits/stdc++.h>
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
        int i,x=0;
        ll a;
        vc(int)v;
        vc(int)v1;
        fi(i,0,n)
        {
            cin>>a;
            v.pb(a);
        }
        fi(i,0,n-1)
        {
            a=abs(v[i+1]-v[i]);
            v1.pb(a);
            if(a>=n)
            {
                x=1;
                break;
            }
        }
        st(v1);
        fi(i,1,n)
        {
            if(v1[i]==v1[i-1])
            {
                x=1;
                break;
            }
        }
        if(x==1)
            cout<<"Not jolly"<<endl;
        else
            cout<<"Jolly"<<endl;
        v.clear();
        v1.clear();
    }
    return 0;
}

