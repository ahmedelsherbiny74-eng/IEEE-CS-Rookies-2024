#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() 
{
    int n, z, c;
    cin>>n;
    string star;
    cin>>star;
    char scar[n];
    scar[0] = star[0];
    z = 0;
    c = 1;
    
    for (int i = 1; i < n; i++)
    {
        if (scar[z] == star[i])
            continue;
            
        else 
        {
            z++;
            scar[z] = star[i];
            c++;
        }
    }
    cout<<c;
}