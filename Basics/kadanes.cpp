//Kadane's algorithm to find the maximum sum of a subarray

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of the array"<<endl;
    cin>>n;

    int a[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int cs=0, ms=0;
    for(int i=0; i<n; i++)
    {
        cs=cs+a[i];
        if(cs<0)
        {
            cs=0;
        }
        ms=max(cs,ms);
    }

    cout<<"the maximum sum of the subarray is "<<ms<<endl;
    return 0;
}