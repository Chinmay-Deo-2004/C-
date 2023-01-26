#include <iostream>
using namespace std;

int main()
{
    int a,b;
    int* p1;
    int* p2;

    p1=&a;
    p2=&b;

    cout<<p1+p2<<endl;



    return 0;
}