#include<bits/stdc++.h>
#include<set>
#include<string>
using namespace std;
int main()
{
    int n,m,i,j,c1=0,c0=0,sum=0;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                c1++;
            }
            else
            {
                c0++;
            }
        }
        c1=pow(2,c1)-1;
        c0=pow(2,c0)-1;
        sum+=c1+c0;
        c1=0;
        c0=0;
    }
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i][j]==1)
                c1++;
            else
                c0++;
        }
        if(c1>1)
        {
            c1=pow(2,c1)-1-c1;
            sum+=c1;
        }
        if(c0>1)
        {
            c0=pow(2,c0)-1-c0;
            sum+=c0;
        }
        c1=0;
        c0=0;
    }
    cout<<sum;
    return 0;
}
