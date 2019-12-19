#include<stdio.h>
#include<math.h>
#include<stdlib.h>
double dis(double a,double b,double c,double d)
{
    double ans;
    ans=sqrt((a-c)*(a-c)+(b-d)*(b-d));
    return ans;
}
int main()
{
    int t,i=0;
    double xo,xa,xb,yo,ya,yb,r,d,an,ans;
    scanf("%d",&t);
    while(i<t)
    {
        i++;
        scanf("%lf %lf %lf %lf %lf %lf",&xo,&yo,&xa,&ya,&xb,&yb);
        r=dis(xo,yo,xa,ya);
        d=dis(xa,ya,xb,yb);
        an=acos(1-(d*d/(2*r*r)));
        ans=r*an;
        printf("Case %d: %.8f\n",i,ans);

    }
    return 0;
}
