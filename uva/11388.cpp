#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,g,l;
        cin>>a>>b;
        g=__gcd(a,b);
        l=(a*b)/g;
        if(a==g && b==l)
            cout<<a<<" "<<b<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
