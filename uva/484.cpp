#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int>v;
    map<int,int>m;
    int i,n;
    while(cin>>n)
    {
        if(m.count(n)==0)
        {
            m[n]=1;
            v.push_back(n);
        }
        else
        {
            m[n]++;
        }
    }
    int l=v.size();
    for(i=0;i<l;i++)
    {
        cout<<v[i]<<" "<<m[v[i]]<<endl;
    }
    return 0;
}
