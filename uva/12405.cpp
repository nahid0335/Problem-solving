#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t,j=0;
    cin>>t;
    while(j<t)
    {
        j++;
        ll n,i,c=0,k=1;
        char a;
        cin>>n;
        while(n--)
        {
            cin>>a;
            if(a=='.' && k==1)
            {
                c++;
                k++;
            }
            else if(a=='#' && k==1)
                k=1;
            else
                k++;
            if(k==4)
                k=1;
        }
        cout<<"Case "<<j<<": "<<c<<endl;
    }
    return 0;
}
