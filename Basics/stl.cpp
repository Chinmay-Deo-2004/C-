#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{  
    vector<int> v = {1,2,3,4,5};

    vector<int> :: iterator it = v.begin();

    it++;
    cout<<v.at(4);

    // vector<int> :: iterator us = v.rbegin();

    // cout<<v[1]<<endl;

    


    
    return 0;
}