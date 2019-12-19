#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define d double
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll l,f,n;
    while(cin>>l>>f)
    {
        if(l==0 && f==0)
            break;
        d v=sqrt(l*f*2.0);
        d vec=(v*3600)/(2*l);
        cout<<fixed<<setprecision(10)<<v<<" "<<vec<<endl;
    }
    return 0;
}
