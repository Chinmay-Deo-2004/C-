#include<iostream>
using namespace std;

void oneton(int n)
{
    int static c = 0;
    if(n<1)
    return;

    cout<<++c<<endl;
    oneton(--n);


}

int main()
{
    oneton(6);

    return 0;
}