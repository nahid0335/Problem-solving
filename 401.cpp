#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,x,y;
    char m[3000];
    int k=1;
    memset(m,NULL,sizeof(m));
    m['A']='A';
    m['E']='3';
    m['H']='H';
    m['I']='I';
    m['J']='L';
    m['L']='J';
    m['M']='M';
    m['O']='O';
    m['S']='2';
    m['T']='T';
    m['U']='U';
    m['V']='V';
    m['W']='W';
    m['X']='X';
    m['Y']='Y';
    m['Z']='5';
    m['1']='1';
    m['2']='S';
    m['3']='E';
    m['5']='Z';
    m['8']='8';
    while(cin>>s)
    {
        x=y="";
        int l;
        l=s.size();
        for(int i=l-1;i>=0;i--)
        {
            x+=s[i];
            y+=m[s[i]];
        }
        if (s==x && s==y)
        {
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        }
        else if(s==x && s!=y)
        {
            cout<<s<<" -- is a regular palindrome."<<endl;
        }
        else if(s!=x && s==y)
        {
            cout<<s<<" -- is a mirrored string."<<endl;
        }
        else if(s!=x && s!=y)
        {
            cout<<s<<" -- is not a palindrome."<<endl;
        }
        cout<<endl;
    }
    return 0;
}
