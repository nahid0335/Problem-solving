#include<stdio.h>
int main()
{
    long long int a,b;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%I64d %I64d",&a,&b);
        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else
        {
            printf("=\n");
        }
    }
    return 0;
}
