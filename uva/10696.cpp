#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    long long int n,x=91;
    while(cin>>n)
    {
        if (n==0)
        {
            break;
        }
        if(n<=100)
        {
            cout<<"f91("<<n<<") = "<<x<<endl;
        }
        else
        {
            cout<<"f91("<<n<<") = "<<n-10<<endl;
        }
    }
    return 0;
}
