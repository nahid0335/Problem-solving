#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t,a,b,c=0,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a>>b;
        if(a%2==0)
            a++;
        if(b%2==0)
            b--;
        for(ll i=a;i<=b;i+=2)
        {
            sum+=i;
        }
        c++;
        cout<<"Case "<<c<<": "<<sum<<endl;
    }
    return 0;
}
