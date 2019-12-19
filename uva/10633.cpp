#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    unsigned long long n,x;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        x=(n*10)/9;
        if(n%9==0)
        {
            cout<<x-1<<" "<<x<<endl;
        }
        else{
            cout<<x<<endl;
        }
    }
    return 0;
}
