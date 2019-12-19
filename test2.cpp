#include<bits/stdc++.h>
#define read freopen("input.txt","r",stdin)
#define write freopen("output.txt","w",stdout)
using namespace std;
#define max 1000009
bool prime[max];
long long int num[max];
int main()
{
    read;
    write;
    long long int i,j,n,k,x,px,l,test,p,q,m,ans,counter;
    char a[100];
    for(i=4;i<=max;i+=2)
        prime[i]=1;

    long long int s=sqrt(max);
    for(i=3;i<=s;i+=2)
    {

        if(prime[i]==0)
        {
            for(j=i*i;j<=max;j+=2*i)
            {
                prime[j]=1;
            }
        }
    }
    prime[1]=1;prime[0]=1;
    k=0;
    for(i=0;i<max;i++)
    {
        if(prime[i]==0)
        {
            num[k++]=i;
        }
    }
    cin>>test;
    for(m=1;m<=test;m++)
    {
        scanf("%lld",&n);
        ans=1;
        for(int j=0;j<k&&num[j]<=sqrt(n);j++)
        {
            if(n<num[j])
                break;
            if(n%num[j]==0)
            {
                counter=1;
                while(n%num[j]==0)
                {
                    n/=num[j];
                    counter++;
                }
                ans*=counter;
            }
        }
        if(n>1)
        {
            ans=ans*2;
        }
        printf("Case %lld: %lld\n",m,ans-1);
    }
    return 0;
}
