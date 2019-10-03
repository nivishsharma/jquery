#include<conio.h>
#include<iostream>
using namespace std;
class complex
{
    int real, img;
public:
    void read();
    void show();
};
void complex :: read()
{
    cout<<"Enter real no: ";
    cin>>real;
    cout<<"Enter imaginary no: ";
    cin>>img;
}
void complex :: show()
{
    cout<<"The number is: ";
    cout<<real;
    if (img<0)
    cout<<"-i";
    else
    cout<<"+i";
    cout<<abs(img);
}
int main()
{
    complex c;
    c.read();
    c.show();
    return 0;
}
