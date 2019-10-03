#include<conio.h>
#include<iostream>
using namespace std;
class second;
class first
{
int x;
public:
    void read()
    {
        cout<<"enter no"<<endl;
        cin>>x;
    }
friend void max(first,second);
};
class second
{
int y;
public:
     void read()
    {
        cout<<"enter no"<<endl;
        cin>>y;
    }
friend void max(first,second);
    };
void max(first x,second y)
    {
    if(x.x>y.y)
    {
    cout<<"\n "<<x.x<<" is greater";
    }
    else
        {
        cout<<"\n "<<y.y<<" is greater";
        }
    }
int main()
    {
        first obj1;
        second obj2;
        obj1.read();
        obj2.read();
        max(obj1,obj2);
        return 0;
    }
