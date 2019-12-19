#include<stdio.h>
int main()
{
    int n,k,i,x,count=0;
    double sum,s=0.0000000000,su=0.0000000000;
    scanf("%d %d",&n,&k);
    int ar[n];
    x=n-k+1;
    for (i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+ar[i];
        count++;
        if (k==1)
        {
            sum=s/(double)x;
            su=su+sum;
            s=0.0000000000;
        }
        else if (count==k)
        {
            sum=s/(double)x;
            su=su+sum;
            s=0.0000000000;
            count=0;
            i--;
        }
    }
    printf("%.10lf",su);
    return 0;
}
