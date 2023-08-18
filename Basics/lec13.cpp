#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<vector>
using namespace std;

int main()
{
    //pointers in array
    int marks[4] = {23, 45, 87, 97};
    sort(marks, 4);
    int* p = marks;
    cout<<*(p++)<<endl; //first value at p will get printed, then AFTER this line is executed, p will get incremented and in next line p will have value p=p+1.
    cout<<*p<<endl;
    cout<<*(++p)<<endl; //Now here, FIRST the value of p will get incremented. i.e BEFORE this line gets executed, so it will take p as p=p+1 here itself.

    cout<<"The value of marks[0] is "<<*p<<endl;
    cout<<"The value of marks[1] is "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is "<<*(p+3)<<endl;

    return 0;
}