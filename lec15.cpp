#include<iostream>
using namespace std;

//swapping using REFERENCE VARIABLES
int & swap (int &x, int &y)
{
    int p=x;
    x=y;
    y=p;

    return x;
}

int main()
{
    int & swap (int &, int &);

    int a=2, b=3;

    swap(a, b)=766; //because after swapping I linked 766 with reference of a.
                    // So initially, a-2, b=3. after swapping, a=3, b=2.
    // But, I linked 766 with a by returning it as a ref, so in the end a=766, b=2.
    
    cout<<a<<" and "<<b<<endl;

    return 0;
}