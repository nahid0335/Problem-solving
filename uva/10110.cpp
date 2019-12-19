#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int n,i,j,x;
    while(cin>>n)
    {
        if(n==0)
            break;
        x=sqrt(n);
        if(x*x==n)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;
}
