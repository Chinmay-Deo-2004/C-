#include<iostream>
using namespace std;

void ntoone(int n)
{
    if(n<1)
    return;
    int static c =1;
    c++;
    ntoone(--n);
    cout<<--c<<endl;


}

int main()
{
    ntoone(5);
    return 0;
}