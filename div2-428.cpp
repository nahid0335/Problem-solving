#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k,i,j;
    cin>>n>>k;
    int a[n];
    for(i=0;i<k;i++)
    {
        cin>>a[i];
    }
    for(i=1,j=0;i<n;i++)
    {
        for(x=1;j<k;)
        {
            if(x==1 || x==2)
            {
                if(a[j]>2)
                {
                    a[j]-=2;
                }
                else
                {
                    j++;
                }
                x++;
            }
            else
            {
                if(a[j]>4)
                {
                    a[j]-=4;

                    break;
                }
                else if(a[j]>=3 && a[j]<=4)
                {
                    j++;
                }
                else
                {
                    if(a[j]==1)
                    {

                    }

                }
            }
        }
    }
    return 0;
}
