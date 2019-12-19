#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,sum,i,j,a,b,c=0;
    while(cin>>n)
    {
        c++;
        if(n==0)
            break;
        int ar[n];
        b=0;
        sum=0;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
        }
        a=sum/n;
        for(i=0;i<n;i++)
        {
            if(ar[i]>a)
                b+=(ar[i]-a);
        }
        cout<<"Set #"<<c<<endl;
        cout<<"The minimum number of moves is "<<b<<".\n"<<endl;
    }
    return 0;
}
