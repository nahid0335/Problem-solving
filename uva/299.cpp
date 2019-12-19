#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,t,i,j;
    int a[100];
    cin>>t;
    while(t--)
    {
        int c=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    swap(a[j],a[j+1]);
                    c++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
    }
    return 0;
}
