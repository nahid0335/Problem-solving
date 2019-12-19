#include<bits/stdc++.h>
using namespace std;
string a,b;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s1,s2;
    int i,len1,len2,c;
    bool j;
    while(1)
    {
        cin>>s1>>s2;
        if(s1=="0" && s2=="0")
            break;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        if(s1.size()<s2.size())
        {
            while(s1.size()!=s2.size())
                s1+='0';
        }
        else
        {
            while(s1.size()!=s2.size())
                s2+='0';
        }
        c=0;
        j=0;
        for(i=0;i<s1.size();i++)
        {
            if((s1[i]-'0'+s2[i]-'0'+j)>9)
            {
                c++;
                j=1;
            }
            else
                j=0;
        }
        if(c==0)
            cout<<"No carry operation."<<endl;
        else if(c==1)
            cout<<c<<" carry operation."<<endl;
        else
            cout<<c<<" carry operations."<<endl;
    }
    return 0;
}
