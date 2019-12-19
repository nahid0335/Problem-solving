#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,i,n;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        long long int a=1;
        scanf("%lld",&n);
        if(n%2!=0)
            printf("Case %lld: Impossible\n",i);
        else
        {
            while(n%2==0 && n>0)
            {
                a*=2;
                n/=2;
            }
            if(n==1)
                printf("Case %lld: Impossible\n",i);
            else
                printf("Case %lld: %lld %lld\n",i,n,a);
        }
    }
    return 0;
}
