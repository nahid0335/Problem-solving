#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    double a,b,c,s,r;
    while(cin>>a>>b>>c)
    {
        if(a<=0||b<=0||c<=0)
        {
            cout<<"The radius of the round table is: 0.000"<<endl;
        }
        else
        {
            s=(a+b+c)/2;
            r=sqrt((s-a)*(s-b)*(s-c)/s);
            cout<<"The radius of the round table is: "<<fixed<<setprecision(3)<<r<<endl;
        }
    }
    return 0;
}
