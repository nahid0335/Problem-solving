#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,m,i,j,c=0;
    scanf("%lld %lld",&n,&m);
    ll a[11]={0};
    for(i=0;i<n;i++)
    {
        scanf("%lld",&j);
        a[j]++;
    }
    ll sum=0;
    for(i=1;i<m;i++)
    {
        ll su=0;
        for(j=i+1;j<=m;j++)
            su+=a[j];
        sum+=a[i]*su;
    }
    printf("%lld",sum);
    return 0;
}
