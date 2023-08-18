#include<iostream>
using namespace std;

int add(int n)
{   
    int static sum = 0; 
    if(n<1)
        return sum;

    sum+=n;
    add(--n);

}

int main()
{
    int ans;
    ans = add(5);
    cout<<ans;
    return 0;
}