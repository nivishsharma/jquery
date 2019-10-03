#include<conio.h>
#include<iostream>
using namespace std;
int main()
{
    int i, n;
    cout<<"Enter array size:\t";
    cin>>n;
    int *a=new int[n];
    cout<<"Enter array elements:\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    delete a;
    return 0;
}
