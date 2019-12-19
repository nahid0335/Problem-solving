#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int l,i,h;
    while(cin>>l>>h)
    {
        if(l>h)
        {
            swap(l,h);
        }
        long long int c=0,mc=0,p,v=0;
        if(l==0 && h==0)
        {
            break;
        }
        for(i=l;i<=h;i++)
        {
            p=i;
            while(p>0)
            {
                c++;
                if(p%2==0)
                {
                    p=p/2;
                }
                else if(p%2!=0)
                {
                    p=3*p+1;
                }
                if(p==1)
                {
                    break;
                }
            }
            if(mc<c)
            {
                mc=c;
                v=i;
            }
            c=0;
        }
        cout<<"Between "<<l<<" and "<<h<<", "<<v<<" generates the longest sequence of "<<mc<<" values."<<endl;
    }
    return 0;
}
