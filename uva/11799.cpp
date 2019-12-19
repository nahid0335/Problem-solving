#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t,i=0;
    cin>>t;
    while(i<t)
    {
        i++;
        ll n,a,j,m=0;
        cin>>n;
        for(j=1;j<=n;j++)
        {
            cin>>a;
            if(a>m)
                m=a;
        }
        cout<<"Case "<<i<<": "<<m<<endl;
    }
    return 0;
}
