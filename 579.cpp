#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    double h,m,t,i,j;
    while(scanf("%lf:%lf",&h,&m))
    {
        if(h==0 && m==0)
        {
            break;
        }
        i=(h*30)+(m/2);
        j=m*6;
        t=i-j;
        if(t<0)
            t*=-1;
        if(t>180)
            t=360-t;
        cout<<fixed<<setprecision(3)<<t<<endl;
    }
    return 0;
}
