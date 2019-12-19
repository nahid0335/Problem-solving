#include<stdio.h>
#include<stdlib.h>
int main()
{
    long long int l,r,n,m,i,count2=0,count3=0,count5=0,count7=0;
    scanf("%lld %lld",&l,&r);
    n=r-l;
    if(n<=3)
    {
        for(;l<=r;l++)
        {
            m=l;
            for(;m>0;)
            {
                if(m%2==0)
                {
                    m/=2;
                    count2++;
                }
                else if(m%3==0)
                {
                    m/=3;
                    count3++;
                }
                else if(m%5==0)
                {
                    m/=5;
                    count5++;
                }
                else if(m%7==0)
                {
                    m/=7;
                    count7++;
                }
            }
        }
    }
    else
    {
        printf("2");
        return 0;
    }
    if((count2>=count3) && (count2>=count5) && (count2>=count7))
    {
        printf("2");
        return 0;
    }
    else if((count3>=count2) && (count3>=count5) && (count3>=count7))
    {
        printf("3");
        return 0;
    }
    else if((count5>=count3) && (count5>=count2) && (count5>=count7))
    {
        printf("5");
        return 0;
    }
    else
    {
        printf("7");
        return 0;
    }
}
