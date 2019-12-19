#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t,i=0;
    cin>>t;
    while(i<t)
    {
        i++;
        ll t1,t2,f,a;
        int ct[3];
        cin>>t1>>t2>>f>>a;
        for(int j=0;j<3;j++)
            cin>>ct[j];
        sort(ct,ct+3);
        ll avg=ct[1]+ct[2];
        avg/=2;
        ll tot=t1+t2+f+a+avg;
        if(tot>=90)
            cout<<"Case "<<i<<": A"<<endl;
        else if(tot>=80 && tot<90)
            cout<<"Case "<<i<<": B"<<endl;
        else if(tot>=70 && tot<80)
            cout<<"Case "<<i<<": C"<<endl;
        else if(tot>=60 && tot<70)
            cout<<"Case "<<i<<": D"<<endl;
        else
            cout<<"Case "<<i<<": F"<<endl;
    }
    return 0;
}
