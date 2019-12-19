#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n,k,a,b,c,d,t,i,cas=0;
    cin>>n;
    while(n--)
    {
        cin>>k;
        cas++;
        t=0;
        for(i=2;i*i<k;i++)
        {
            if(t==2)
                break;
            c=a;
            d=b;
            if(k%i==0)
            {
                a=i;
                b=k/i;
                t++;
            }

        }
        cout<<"Case #"<<cas<<": "<<k<<" = "<<c<<" * "<<d<<" = "<<a<<" * "<<b<<endl;
    }
    return 0;
}
