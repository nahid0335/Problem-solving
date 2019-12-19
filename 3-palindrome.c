#include<stdio.h>
int main()
{
    int n,count=1,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(count<=2)
        {
            printf("a");
            count++;
        }
        else
        {
            printf("b");
            count++;
        }
        if(count==5)
        {
            count=1;
        }
    }
    return 0;
}
