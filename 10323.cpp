#include<bits/stdc++.h>
using namespace std;
long long int fac(long long int n)
{
    if(n==1)
        return 1;
    return n*fac(n-1);
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long n,x;
    while(cin>>n)
    {
        if(n<0 && n%2==0)
            cout<<"Underflow!"<<endl;
        else if((n<0 && n%2==1)||n>13)
            cout<<"Overflow!"<<endl;
        else
        {
        x=fac(n);
        if(x<10000)
            cout<<"Underflow!"<<endl;
        else if(x>6227020800)
            cout<<"Overflow!"<<endl;
        else
            cout<<x<<endl;
        }
    }
    return 0;
}
