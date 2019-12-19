#include<bits/stdc++.h>
using namespace std;

class mat{
    int *data;
    int r,c;
public:
    mat()
    {
    }
    friend istream& operator>>(istream &inp, mat &a)
    {
        inp>>a.r>>a.c;
        int len=a.r*a.c;
        a.data=new int[len];
        for(int i=0;i<len;i++)
            inp>>a.data[i];
        return inp;
    }
    friend ostream& operator<<(ostream &out,mat &a)
    {
        int len=a.r*a.c;
        for(int i=0,j;i<len;)
        {
            for(j=0;j<a.c;j++,i++)
                out<<a.data[i];
            out<<endl;
        }
        out<<endl;
        return out;
    }
    mat& operator+(const mat &b)
    {
        int len=b.r*b.c;
        for(int i=0;i<len;i++)
        {
            data[i]+=b.data[i];
        }
        return *this;
    }
};
int main()
{
    mat x,y,z,a;
    cin>>x>>y;
    a=x+y+x;
    cout<<a;
}
