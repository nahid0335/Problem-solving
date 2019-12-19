#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
int main()
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    int ar[n][n];
    memset(ar,0,sizeof(n));
    if(n>=k)
    {
        for(i=0;i<k;i++)
        {
            for(j=0;j<k;j++)
            {
                if(j==i)
                {
                    ar[i][j]=1;
                }
            }
        }
    }
    else if(k>n)
    {
        k-=n;
        if(k%2==0)
        {
            for(i=0;i<k/2;i++)
            {
                for(j=0;j<k/2;j++)
                {
                    if(i==0)
                    {
                        ar[i][j]=1;
                    }
                    else if(i>=1 && j==0)
                    {
                        ar[i][j]=1;
                    }
                }
            }
        }
        else
        {
            printf("-1");
            return 0;
        }
    }
    return 0;
}
