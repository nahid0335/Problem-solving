#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t,i=0;
    cin>>t;
    while(i<t)
    {
        i++;
        ll n,a,p=0,h=0,b=0;
        cin>>n;
        for(ll j=1;j<=n;j++)
        {
            cin>>a;
            if(j>1 && a>p)
                h++;
            else if(j>1 && a<p)
                b++;
            p=a;
        }
        cout<<"Case "<<i<<": "<<h<<" "<<b<<endl;
    }
    return 0;
}
