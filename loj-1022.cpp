#include<bits/stdc++.h>
using namespace std;
#define d double
int main()
{
    d s,c,ar,r;
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r;
        c=2*acos(0.0)*r*r;
        s=4*r*r;
        ar=s-c;
        cout<<"Case "<<i<<": "<<fixed<<setprecision(2)<<ar<<endl;
    }
    return 0;
}
