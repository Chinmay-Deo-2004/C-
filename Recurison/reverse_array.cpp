#include<bits/stdc++.h>
#include<string.h>

using namespace std;

bool reverse(string name, int n, int i)
{
    if(i<=n/2)
    {
        if(name[i] != name[n-i-1]);
            return false;
    }
    reverse(name, n, i+1);
        return true;

}

int main()
{
    string name = "mommy";

    cout<<reverse(name, name.length()-1, 0);
    return 0;

}
