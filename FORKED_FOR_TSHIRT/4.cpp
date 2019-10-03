#include<conio.h>
#include<iostream>
using namespace std;
class complex
{
    int real, img;
public:
    void getdata()
    {
    cout<<"Enter real part\t: ";
    cin>>real;
    cout<<"Enter imaginary part\t: ";
    cin>>img;
    }
   complex sum(complex c1, complex c2)
   {
       complex t;
       t.real = c1.real + c2.real;
       t.img = c1.img + c2.img;
       return t;
   }
   void show()
    {
    cout<<"The number is: \n";
    if (img >= 0)
      cout << "Sum of two complex numbers = " << real << " + " << img << "i";
    else
      cout << "Sum of two complex numbers = " << real << " " << img << "i";
    }
};
int main()
{
    complex c1, c2, c3;
    c1.getdata();
    c2.getdata();
    c3= c3.sum(c1,c2);
    c3.show();
    return 0;
}
