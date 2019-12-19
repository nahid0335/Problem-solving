#include<stdio.h>
int cheak(int a)
{
    int i;
    if(a==1)
        return 0;
    else if(a==2)
        return 1;
    else
    {
        if(a%2==0)
            return 0;
        for(i=3;i*i<=a;i+=2)
        {
            if(a%i==0)
                return 0;
        }
        return 1;
    }
}
int main()
{
    int t,n,m,i=0,j;
    scanf("%d",&t);
    while(i<t)
    {
        i++;
        scanf("%d %d",&n,&m);
        for(j=n;j<=m;j++)
        {
            if(cheak(j))
            {
                printf("%d\n",j);
            }
        }
        printf("\n");
    }
    return 0;
}
