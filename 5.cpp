#include<cstdio>
#include <cmath>
int main()
{
        freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int  m,T=1;
    double u,v,t,a,s;
    while (scanf("%d",&m)&&m!=0)
    {
        switch (m)
        {
        case 1:
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",T,s,a);
            break;
        case 2:
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",T,s,t);
            break;
        case 3:
            scanf("%lf %lf %lf",&u,&a,&s);
            t=(sqrt(u*u+2.0*s*a)-u)/a;
            v=u+a*t;
            printf("Case %d: %.3lf %.3lf\n",T,v,t);
            break;
        case 4:
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt(v*v-2.0*s*a);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",T,u,t);
            break;
        }
        T++;
    }
}
