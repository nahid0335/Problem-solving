#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    int i,j,a;
    while(getline(cin,s))
    {
        int l=s.size();
        for(i=l-1;i>=0;)
        {
            if(s[0]>='0' && s[0]<='9')
            {
                if(s[i]!='1')
                {
                    a=(s[i-1]-'0')+(s[i]-'0')*10;
                    i-=2;
                }
                else
                {
                    a=(s[i-2]-'0')+(s[i-1]-'0')*10+(s[i]-'0')*100;
                    i-=3;
                }
                cout<<(char)a;
            }
            else
            {
                a=s[i];
                while(a)
                {
                    cout<<a%10;
                    a/=10;
                }
                i--;
            }
        }
        cout<<endl;
    }
    return 0;
}
