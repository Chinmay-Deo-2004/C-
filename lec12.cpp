#include<iostream>
using namespace std;

int main()
{
    //pointers
    int a=4;
    int* p = &a;
    cout<<"address of a is "<<p<<endl;

    //address of operator
    cout<<&a<<endl;

    //*--> dereferencing operator
    cout<<*p<<endl; 

    //pointer to pointer
    int** c = &p;
    cout<<"The address of p is "<<&p<<endl;
    cout<<"The address of p is "<<c<<endl;
    cout<<"The value at address c is"<<*p<<endl;
    cout<<"The value at address value_at(address value at(c)) is"<<**c<<endl;

    return 0;
}
