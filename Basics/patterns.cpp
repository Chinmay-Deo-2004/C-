#include<iostream>
using namespace std;

void print(int n)
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}

int main()
{
    int t;
    cin>>t;


    while(t!=0)
    {
        int n;
        cin>>n;

        print(n);
        t--;

    }


    return 0;
}