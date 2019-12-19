#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int n,t,c=0,sum,m,a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        a=n;
        c++;
        while(n!=9)
        {
            if(n<=9)
            {
                sum=n;
                break;
            }
            while(n!=0)
            {
                m=n%10;
                sum+=(m*m);
                n=n/10;
            }
            n=sum;
            sum=0;
        }
        if(sum==1 ||sum==7)
            cout<<"Case #"<<c<<": "<<a<<" is a Happy number."<<endl;
        else
            cout<<"Case #"<<c<<": "<<a<<" is an Unhappy number."<<endl;
    }
    return 0;
}
