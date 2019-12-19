#include <bits/stdc++.h>
using namespace std;
int main()
{ freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
    long long int n,a,b,i,j,s,m,r,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
    cin>>m;
    if(m<10)
    {
      n=m*m;
    }
    else
    {
        n=m;
    }

    while(n>9)
    {
        s=0;
        while(n!=0)
        {
            r=n%10;
            s=s+r*r;
            n=n/10;
        }
        n=s;
    }
    if(n==1)
    {
        printf("Case #%lld: %lld is a Happy number.\n",i,m);
    }
    else
    {
        printf("Case #%lld: %lld is an Unhappy number.\n",i,m);
    }
    }
    return 0;
}
