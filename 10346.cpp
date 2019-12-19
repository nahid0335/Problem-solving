#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int n,k,i,x,sum;
    while(cin>>n>>k)
    {
        if(k<=1)
            cout<<n<<endl;
        else
        {
            sum=n;
            while(1)
            {
                i=n%k;
                x=n/k;
                sum+=x;
                n=i+x;
                if(n<k)
                    break;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
