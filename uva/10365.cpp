#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n,c;
    cin>>c;
    while(c--)
    {
        cin>>n;
        ll area=10000000000;
        for(ll i=1;i*i<=n;i++)
            if(n%i==0)
                for(ll j=1;j*j<=n/i;j++)
                    if((n/i)%j==0)
                        area=min(area,2*(i*j+n/i+n/j));
        cout<<area<<endl;
    }
    return 0;
}
