#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int n,x,y,c,r;
    while(cin>>n)
    {
        if(n==0)
            break;
        r=ceil(sqrt(n));
        c=r*r-r+1;
        x=y=r;
        if(r%2==0)
        {
            if(n>c)
                y-=n-c;
            else
                x-=c-n;
        }
        else
        {
            if(n>c)
               x-=n-c;
            else
                y-=c-n;
        }
        cout<<x<<" "<<y<<endl;
    }
}
