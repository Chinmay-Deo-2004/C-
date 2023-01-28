#include<iostream>
using namespace std;

int c=75;

int main(){

    int c=9;

    cout<<"value of local c is: "<<c<<endl;
    cout<<"value of global c is: "<<::c<<endl;
    cout<<endl;

    float d=35.6f;  //if that 'f' isn't added, compiler by default takes such a number as a double.
    long double e=35.6l; //also the 'l' and 'f' can be capital, no worries there

    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e<<endl;
    cout<<endl;

    //***********float, double and long double literals************
    cout<<"The size of 35.6 is: "<<sizeof(35.6f)<<endl;
    cout<<"The size of 35.6 is: "<<sizeof(35.6F)<<endl;
    cout<<"The size of 35.6 is: "<<sizeof(35.6l)<<endl;
    cout<<"The size of 35.6 is: "<<sizeof(35.6L)<<endl;
    cout<<"The size of 35.6 is: "<<sizeof(35.6)<<endl; //here compiler assumes by default that 35.6 is a double
    cout<<endl;

    //***********reference variables************
    float x=4.5;
    float  &y = x; //y and x share the same memory location. They're one and the same now, it's just giving two names to the same mem loc.
    cout<<"value of x is: "<<x<<endl;
    cout<<"value of y is: "<<y<<endl;
    cout<<endl;

    //***********Typecasting************
    float a=45.46;
    int b=67;
    int g= int(a);

    cout<<"the value of a is: "<<int(a)<<endl;
    cout<<"the value of a is: "<<(int)a<<endl;
    cout<<"the value of b is: "<<(float)b<<endl;
    cout<<"the value of b is: "<<float(b)<<endl;
    cout<<"the value of g is: "<<g<<endl;



    return 0;
}