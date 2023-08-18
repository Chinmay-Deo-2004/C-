#include<iostream>
using namespace std;

int fact (int n)
{
    if(n<=1)
    {
        return 1;
    }

    return n * fact(n-1);
}

int fibonnacci (int n)
{
    if(n<2)
    {
        return 1;
    }
    return fibonnacci(n-2) + fibonnacci(n-1);

}

int main()
{
    int a;
    cout<<"enter nth term of Fibonnaci series which you want to find: "<<endl;
    cin>>a;;

    cout<<fact(4)<<endl;

    cout<<"the term in the Fibonnaci series at the "<<a<<"th position is "<< fibonnacci(a)<<endl;

    return 0;
}