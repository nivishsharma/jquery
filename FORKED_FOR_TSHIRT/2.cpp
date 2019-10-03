#include<conio.h>
#include<iostream>
using namespace std;
class items
{
    int num, mod_no, price;
public:
    void read();
    void show();
};
void items::read()
{
    cout<<"Enter model number:";
    cin>>mod_no;
    cout<<"Enter price:";
    cin>>price;
}
void items::show()
{
    cout<<"Model number: ";
    cout<<mod_no<<endl;
    cout<<"Price: ";
    cout<<price<<endl;
}
int main()
{
    items a1,a2;
    a1.read();
    a2.read();
    a1.show();
    a2.show();
    return 0;
}
