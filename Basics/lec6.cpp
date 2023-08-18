// There are two types of header files:

// 1.) System header files
#include<iostream>
using namespace std;

// 2.) User defined
#include"chinmay.h"

int main(){
    //arithmetic ops
    int a=4, b=3;
    cout<<" + operator: "<<a+b<<endl;
    cout<<" - operator: "<<a-b<<endl;
    cout<<" * operator: "<<a*b<<endl;
    cout<<" / operator: "<<a/b<<endl;
    cout<<" a++ operator: "<<a++<<endl;
    cout<<" a-- operator: "<<a--<<endl;
    cout<<" ++a operator: "<<++a<<endl;
    cout<<" --a operator: "<<--a<<endl;
    cout<<" % operator: "<<a%b<<endl;
    cout<<endl;

    //comparison ops
    cout<<"the value of a==b is "<<(a==b)<<endl; //need to add parentheses so compiler doesn't get confused which var to give to cout.
    cout<<"the value of a<=b is "<<(a<=b)<<endl; 
    cout<<"the value of a>=b is "<<(a>=b)<<endl; 
    cout<<"the value of a<b is "<<(a<b)<<endl; 
    cout<<"the value of a>b is "<<(a>b)<<endl; 
    cout<<"the value of a!=b is "<<(a!=b)<<endl; 
    cout<<endl;

    //logical ops
    cout<<"the value of this and logical operator ((a==b) && (a<=b)) is: "<<((a==b) && (a<=b))<<endl;
    cout<<"the value of this or logical operator ((a==b) || (a<=b)) is: "<<((a==b) || (a>=b))<<endl;
    cout<<"the value of this not logical operator (!(a==b)) is: "<<(!(a==b))<<endl;


    return 0;
}