#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,t=1;
    while(cin>>n && n!=0)
    {
        int sum=0;
        for (int i=1;i<n;i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        if (t==1)
        {
            cout<<"PERFECTION OUTPUT"<<endl;
            t++;
        }
        if(n==sum)
        {
            printf("%5d  PERFECT\n",n);
        }
        else if(sum<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else
        {
            printf("%5d  ABUNDANT\n",n);
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
