#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t,j=0;
    cin>>t;
    while(j<t)
    {
        j++;
        double c,d;
        cin>>c>>d;
        double f=(9.0/5.0)*c+32;
        f+=d;
        double p=(f-32)*5.0/9.0;
        cout<<"Case "<<j<<": "<<fixed<<setprecision(2)<<p<<endl;
    }
    return 0;
}
