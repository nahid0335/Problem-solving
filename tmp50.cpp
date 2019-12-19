#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    long long int n,x,y,i,j,k,l,r,ans=0;
    cin>>n;
    while(n--)
    {
        cin>>l>>r;
        if((r-l+1)%2==0)
        {
            if(l%2)
            {
                cout<<(r-l+1)/2<<endl;
            }
            else
            {
                cout<<-(r-l+1)/2<<endl;
            }
        }
        else
        {
            x=l;
            if(l%2) x=-x;
            if(l%2)
            {
                cout<<x-(r-l+1)/2<<endl;
            }
            else
            {
                cout<<x+(r-l+1)/2<<endl;
            }
        }

    }
    return 0;
}
