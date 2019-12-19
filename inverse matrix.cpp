#include<bits/stdc++.h>
using namespace std;
double a[3][3],b[3][3];

int main()
{
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin>>a[i][j];
            if(i==j)
                b[i][j]=1;
            else
                b[i][j]=0;
        }
    }
    for(int k=0; k<3; k++)
    {
        for(int i=k; i<3; i++)
        {
            double tmp=a[i][k];
            for(int j=0; j<3; j++)
            {
                if(i==k)
                {
                    a[i][j]/=tmp;
                    b[i][j]/=tmp;
                }
                else
                {
                    a[i][j]-=(tmp*a[k][j]);
                    b[i][j]-=(tmp*b[k][j]);
                }
            }
        }
    }
    for(int k=2; k>0; k--)
    {
        for(int i=k-1; i>=0; i--)
        {
            double tmp=a[i][k];
            for(int j=0; j<3; j++)
            {
                    a[i][j]-=(tmp*a[k][j]);
                    b[i][j]-=(tmp*b[k][j]);
                   // cout<<"tmp:"<<tmp<<endl;
                   // cout<<"i:"<<i<<" j:"<<j<<"="<<b[i][j]<<endl;
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout<<b[i][j]<<" ";
        cout<<endl;
    }
}
