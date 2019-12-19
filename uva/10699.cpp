#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N 1000000
bitset<N+1>prime;
void genprime(vector<int>&v)
{
    prime.flip();
    prime.reset(0);
    prime.reset(1);
    for(int i=2;i<=N;i++)
    {
        if(prime.test(i))
        {
            for(int j=2*i;j<=N;j+=i)
            {
                prime.reset(j);
            }
            v.push_back(i);
        }
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    vector<int>v;
    int n;
    genprime(v);
    while(cin>>n)
    {
        if(n==0)
            break;
        int c=0,i=0,a=n;
        while(n!=1)
        {
            if(n%v[i]==0)
            {
                c++;
                while(n%v[i]==0)
                {
                    n/=v[i];
                }
            }
            i++;
        }
        cout<<a<<" : "<<c<<endl;
    }
    return 0;
}
