#include<iostream>
using namespace std;

void name(int c)
{
    int static cnt = c;
    if(cnt>4)
        return;
    cout<<"Chinmay"<<endl;
    name(cnt++);
}

int main()
{
    name(0);

    return 0;
}