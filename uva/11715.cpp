#include<bits/stdc++.h>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    double u,v,s,t;
    int c=0,a;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        c++;
        if(a==1)
        {
            scanf("%lf%lf%lf",&u,&v,&t);
            a=(v-u)/t;
            s=u*t+(a*t*t)*0.5;
            printf("Case %d: %.3lf %.3lf\n",c,s,a);
        }
        else if(a==2)
        {
            scanf("%lf%lf%lf",&u,&v,&a);
            t=(v-u)/a;
            s=u*t+(a*t*t)/2.0;
            printf("Case %d: %.3lf %.3lf\n",c,s,t);
        }
        else if(a==3)
        {
            scanf("%lf%lf%lf",&u,&a,&s);
            v=sqrt((u*u)+2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",c,v,t);
        }
        else if(a==4)
        {
            scanf("%lf%lf%lf",&v,&a,&s);
            u=sqrt((v*v)-2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",c,u,t);
        }
    }
    return 0;
}
