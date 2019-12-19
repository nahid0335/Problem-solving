#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll n,i=0,t;
    cin>>t;
    while(t--)
    {
        ll k,x,p=0,b=0,c=0;
        cin>>n>>k;
        cin>>x;
        p=x;
        for(i=1;i<n;i++)
        {
            cin>>x;
            if(x>=p)
                b++;
            else
                c++;
            p=x;
        }
        if(b>c)
        {
            if(k>=c)
                cout<<"A is a magic array."<<endl;
            else
                cout<<"A is not a magic array."<<endl;
        }
        else
        {
            if(k>=b)
                cout<<"A is a magic array."<<endl;
            else
                cout<<"A is not a magic array."<<endl;
        }
    }
    return 0;
}
