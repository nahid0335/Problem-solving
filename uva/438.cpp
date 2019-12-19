#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double x1,x2,x3,y1,y2,y3,s,d,a,b,c,cir;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    while(cin>>x1>>y1>>x2>>y2>>x3>>y3)
    {
        a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
        b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
        c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
        s=(a+b+c)/2;
        d=(a*b*c)/(4*(sqrt(s*(s-a)*(s-b)*(s-c))));
        cir=2*3.141592653589793*d;
        //printf("%.2lf\n",cir);
        cout<<fixed<<setprecision(2)<<cir<<endl;
    }
    return 0;
}
