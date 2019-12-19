#include<bits/stdc++.h>
using namespace std;

class overloading{
int real,img;
public:
    friend istream& operator>>(istream &input,overloading &a)
    {
        input>>a.real>>a.img;
        return input;
    }
   /* friend overloading operator+(overloading &obj1,overloading &obj2)
    {
        overloading tmp;
        tmp.real=obj1.real+obj2.real;
        tmp.img=obj1.img+obj2.img;
        return tmp;
    }
    bool operator>(overloading b)
    {
        if(m>b.m)
            return true;
        else
            return false;
    }
   /* friend overloading operator+(int m,overloading &a)
    {
        overloading tmp;
        tmp.real=a.real+m;
        tmp.img=a.img;
        return tmp;
    }*/
    friend ostream& operator<<(ostream &output,overloading &a)
    {
        output<<a.real<<"+i"<<a.img<<endl;
        return output;
    }
};
int main()
{
    overloading a,b;
    cin>>a>>b;
    cout<<a<<b;
    return 0;
}
