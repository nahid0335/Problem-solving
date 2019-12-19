#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n,s,d,a,b;
    cin>>n;
    while(n--)
    {
        cin>>s>>d;
        if(s<d || (s+d)%2!=0)
            cout<<"impossible"<<endl;
        else
        {
            a=(s+d)/2;
            b=s-a;
            cout<<a<<" "<<b<<endl;
        }
    }
    return 0;
}
