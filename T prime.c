#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,v,m,j,t,count;
    double p;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&v);
        count=0;
        p=sqrt(v);
        m=ceil(p);
        if ((m-(int)p)==0)
        {
            t=sqrt(m);
            if (m==1)
            {
                count=1;
            }
            for(j=2;j<=t+1;j++)
            {
                if (m%j==0)
                {
                    printf("NO\n");
                    count++;
                    break;
                }
            }
            if (count==0)
            {
                printf("YES\n");
            }
            else if(count==1)
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}
