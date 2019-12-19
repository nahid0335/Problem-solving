#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,c,i,j;
    while(cin>>n)
    {
        int a[n];
        c=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    c++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<c<<endl;
    }
    return 0;
}
