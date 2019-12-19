#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n,m,c,i,k,x=2;
    while(cin>>n>>m>>c)
    {
        if(n==0 && m==0 && c==0)
            break;
        if(c==1)
        {
            x=(((m-7)*(n-7))+1)/2;
            cout<<x<<endl;
        }
        else
        {
            x=((n-7)*(m-7))/2;
            cout<<x<<endl;
        }
    }
    return 0;
}
