#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll c=0,n,m;
    double f;
    while(cin>>n)
    {
        if(!n)
            break;
        f=(3+sqrt(9+8*n))/2;
        m=ceil(f);
        c++;
        cout<<"Case "<<c<<": "<<m<<endl;
    }
    return 0;
}
