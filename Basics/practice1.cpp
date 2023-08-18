#include<iostream>
using namespace std;

void numberCrown(int n) {
    // Write your code here.

    int _a = 0;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        for(int j=2*(i-1); j<=2*n-2; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

int main()
{
    int n;

    cin>>n;

    numberCrown(n);
    return 0;
}