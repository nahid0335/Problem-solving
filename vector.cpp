#include<bits/stdc++.h>
using namespace std;
class Vector{
int *len,*data;
public:
    Vector(int a)
    {
        len=new int(a);
        data=new int[*len];
        for(int i=0;i<*len;i++)
            data[i]=0;
    }
    Vector(Vector &a)
    {
        len=new int(*(a.len));
        data=new int[*len];
        for(int i=0;i<*len;i++)
            data[i]=a.data[i];
    }
    void show()
    {
        cout<<endl<<"Length:"<<*len<<endl;
        cout<<"Value: ";
        for(int i=0;i<*len;i++)
            cout<<data[i]<<" ";
        cout<<endl;
    }
    void input()
    {
        cout<<"Enter value:";
        for(int i=0;i<*len;i++)
            cin>>data[i];
    }
    void add(int m)
    {
        (*len)++;
        int *p=new int[*len];
        for(int i=0;i<*len-1;i++)
            p[i]=data[i];
        p[*len-1]=m;
        delete[] data;
        data=p;
    }
    void Remove(int m)
    {
        int f=0,i;
        int *p=new int[*len];
        for(i=0;i<*len;i++)
        {
            if(data[i]!=m)
            {
                p[i]=data[i];
            }
            else
                {
                    f=1;
                    break;
                }
        }
        if(f)
        {
            for(i;i<*len-1;i++)
            {
                p[i]=data[i+1];
            }
            delete[] data;
            data=p;
            (*len)--;
        }
        else
        {
            cout<<"Value not found!"<<endl;
        }
    }
    ~Vector()
    {
        delete (len);
        delete[] data;
    }
};
int main()
{
    int len;
    cout<<"Enter the size of Vector:";
    cin>>len;
    Vector v(len);
    v.show();
    v.input();
    v.show();
    Vector v1(v);
    v1.add(5);
    v1.add(7);
    v1.show();
    v1.Remove(3);
    v1.show();
}
