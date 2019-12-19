#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    ll i,p,t,su;
    while(cin>>s)
    {
        if(s=="0")
            break;
       p=s.size();
       t=0;
       su=0;
       for(i=p-1;i>=0;i--)
       {
           t++;
           if(t%2!=0 && s[i]>='0' && s[i]<='9')
           {
               su+=s[i]-'0';
           }
           else if(t%2==0 && s[i]>='0' && s[i]<='9')
           {
               su-=s[i]-'0';
           }
       }
       su=abs(su);
       if(su%11==0 || su==0)
       {
           cout<<s<<" is a multiple of 11."<<endl;
       }
       else
       {
           cout<<s<<" is not a multiple of 11."<<endl;
       }
    }
    return 0;
}
