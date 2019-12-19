#include<bits/stdc++.h>
using namespace std;
//#define forn(i) for(i=0;i<n;i++)
int main(void)
{
    int t,n,i,j,k,x,y,a,b,c;
    bool flag;
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        flag=false;
//    cout<<"hello1"<<endl;
        for(i=-22;i<=22 && !flag;i++) {
            if(i*i<=c) {
            for(j=-100;j<=100 && !flag;j++) {
                if(j!=i && i*i+j*j<=c) {
                for(k=-100;k<=100 && !flag;k++) {
                    if(k!=i && k!=j && i+j+k==a && i*j*k==b && i*i+j*j+k*k==c) {
                        printf("%d %d %d\n",i,j,k);
                        flag=true;
                    }
                }
                }
            }
            }
        }
        if(!flag) cout<<"No solution."<<endl;
//        cout<<"hello2"<<endl;
    }
    return 0;
}
