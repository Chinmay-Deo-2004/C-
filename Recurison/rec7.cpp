//MY SOLUTION
// #include<iostream>
// using namespace std;  

// void sum(int n)
// {
//     int static s = 0;
//     if(n<0)
//     {    
//         cout<<s;
//         return;
//      }



//    s+=n;
//    n = n-1;
//    sum(n);

    
// }

// int main()
// { 
//     sum(5);

//     return 0;
// }

//STRIVER'S PARAMETERIZED WAY

/*#include<iostream>
using namespace std;

void add(int i, int sum)
{
    if(i<1)
    {
        cout<<sum;
        return;
    }

    sum+=i;
    i--;

    add(i, sum);

}

int main()
{
    add(5, 0);
    return 0;
}
*/

//STRIVER'S FUNCTIONAL WAY
#include<iostream>
using namespace std;

int sum = 0;

int add(int n)
{
    if(n<1)
    {
        return n;
    }

    sum = add(n-1);
    sum+=n;
    return(sum);
}


int main()
{
    cout<<add(5);
    return 0;
}