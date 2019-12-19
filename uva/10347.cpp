#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    double a,b,c,s,area;
    while(cin>>a>>b>>c)
    {
        s=(a+b+c)/2.0;
        area=((4.0/3.0)*(sqrt(s*(s-a)*(s-b)*(s-c))));
        if(area>0)
            cout<<fixed<<setprecision(3)<<area<<endl;
        else
            cout<<"-1.000"<<endl;
    }
    return 0;
}
