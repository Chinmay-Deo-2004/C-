#include <iostream>
using namespace std;

int factorial(int x)
{
    int a =1;
    for(int i=1; i<=x; i++)
    {
        a=a*i;
    }
    return(a);
}

int main()
{
    int n;

    cout<<"enter upto which number you want sum of factorials";
    cin>>n; 

    int sum = 1;

    for(int i=1; i<=n; i++)
    {
        int c = factorial(i);
        sum = sum + c;
    }

    cout<<sum;
}

