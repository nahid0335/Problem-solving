#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        ll c=0;
        for(ll i=a;i<=b;i++)
        {
            ll x=sqrt(i);
            if(i==x*x)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
