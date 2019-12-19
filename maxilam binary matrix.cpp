#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    int ar[n][n];
    memset(ar,0,sizeof(ar));
    if(n>=k)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==i && j<k)
                {
                    ar[i][j]=1;
                }
                printf("%d ",ar[i][j]);
            }
            printf("\n");
        }
    }
    else if(k>n)
    {
        k-=n;
        if(k%2==0 && (k/2)<n)
        {
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    if(i==0 && j<=k/2)
                    {
                        ar[i][j]=1;
                    }
                    else if((i>=1 && j==0)&& (i<=k/2))
                    {
                        ar[i][j]=1;
                    }
                    else if(j==i)
                    {
                        ar[i][j]=1;
                    }
                    printf("%d ",ar[i][j]);
                }
                printf("\n");
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
