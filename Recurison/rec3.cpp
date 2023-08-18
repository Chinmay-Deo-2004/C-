#include<iostream>
using namespace std;

void ntoone(int n)
{
    if(n<1)
    return;
    cout<<n<<endl;
    ntoone(--n);
}

int main()
{
    ntoone(5);
    
    return 0;
}