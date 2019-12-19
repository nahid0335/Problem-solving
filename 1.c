#include<stdio.h>
#include<string.h>
int main()
{
    int count=0,len,temp,n,i,j,k;
    int arr[100];
    scanf("%d",&n);
    char str[n][51];
    for(i=0;i<n;i++)
    {
        scanf("%s",str[i]);
    }
    len=strlen(str[0]);
   // printf("%d",len);
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;)
        {
           for(j=0;j<len;j++)
           {
               if(str[i][0]==str[k][j])
               {
                   k++;
                   break;
                }
               // count++;
            }
            count=count+j;
            printf("%d",j);
        }
        arr[i]=count;
      //  printf("%d",count);
        count=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=arr[j];
            }
        }
    }
    printf("%d",arr[0]);
    return 0;
}

