#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    long long int n;
    string s;
    cin>>n;
    cin.ignore();
    while(n--)
    {
        stack<char>st;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(!st.empty() && s[i]==')' && st.top()=='(')
                st.pop();
            else if(!st.empty() && s[i]==']' && st.top()=='[')
                st.pop();
            else
                st.push(s[i]);
        }
        if(st.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
