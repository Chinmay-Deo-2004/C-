#include<iostream>
#include<cmath>

using namespace std;

int isprime(int x)
{
    int c=0;
    for(int i=2; i<=sqrt(x); i++)
    {
        if(x%i==0)
        {
            c++;
        }
    }

    if(c==0)
    {
        return(1);
    }
    else
    {
        return(0);
    }
}

int main()
{
    int n,c,d;
    cout<<"enter no. to find as a sum of two primes"<<endl;
    cin>>n;

    for(int i=2; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            c=isprime(i);
            d=isprime(j);

            if(c==1 && d==1 && i+j==n)
            {
                cout<<i<<" and"<<j<<endl;
            }
        }
    }
    return 0;

}