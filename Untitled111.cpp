#include<bits/stdc++.h>

using  namespace std;

int main(void)
{
    int t,cs=0,n,i,j,k;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2)
        {
            for(i=0,j=n/2; i<n/2; i++,j--)
            {
                cout<<(n-j)<<" "<<j<<" ";
            }
        }
        else {
            for(k=0,i=n/2,j=n/2+1; k+1<n/2; k++,i--,j++)
            {
                cout<<i<<" "<<j<<" ";
            }
            cout<<"1 ";
        }
        cout<<n<<endl;
        //cout<<"Case "<<++cs<<": ";
        //cout<<ans<<endl;
    }

    return 0;
}
