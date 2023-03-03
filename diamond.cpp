#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<<"how many rows do you want?";
    cin>>n;

    char c;

    c='A';

    for(int i=1; i<=n; i++)
    {
        for(int k=n-i; k>=1; k--)
        {
            cout<<" ";
        }

        for(int j=1; j<=i; j++)
        {
            cout<<c;
        }

        for(int k=1; k<=i-1; k++)
        {
            cout<<c;
        }
        cout<<"\n";
        c++;
    }

    c--;
    c--;

    for(int i=1; i<=n-1; i++)
    {
        for(int j=i; j>=1; j--)
        {
            cout<<" ";
        }

        for(int j=n-1; j>=i; j--)
        {
            cout<<c;
        }

        for(int j=n-2; j>=i; j--)
        {
            cout<<c;
        }

        cout<<"\n";
        c--;
    }


    return 0;
}

/*
   *
  ***
 *****
*******
 ***&&
  **&
   *


*/