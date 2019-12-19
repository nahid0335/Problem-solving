#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int s,e,c,i,t=0;
    while(cin>>s>>e)
    {
        t++;
        if(s<0 && e<0)
            break;
        c=1;
        i=s;
        while(1)
        {
            if(i==1)
            {
                break;
            }
            if(i%2==0)
            {
                i/=2;
                c++;
            }
            else
            {
                i=3*i+1;
                if(i>e)
                    break;
                else
                    c++;
            }
        }
        cout<<"Case "<<t<<": A = "<<s<<", limit = "<<e<<", number of terms = "<<c<<endl;
    }
    return 0;
}
