#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        double R,n,r;
        scanf("%lf %lf",&R,&n);
        double pi=acos(-1.0);
        r=(R*sin(pi/n))/(1+sin(pi/n));
        printf("Case %d: %lf\n",i,r);
    }
    return 0;
}
