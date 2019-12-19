#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    int a;
    while(getline(cin,s))
    {
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            a=s[i];
            cout<<(char)(a-7);
        }
        cout<<endl;
    }
    return 0;
}
