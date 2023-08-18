#include<iostream>
using namespace std;

void oneton(int n)
{
    if(n<1)
    return;
    oneton(--n);
    cout<<n+1<<endl;
}

int main()
{
    oneton(2);
    return 0;
}