#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main() 
{
    long long a, b, q;
    cin>>a>>b>>q;
    long long mod = q % 3;
    
    if (mod == 1)
        cout<<a;
    else if (mod == 2)
        cout<<b;
    else
        cout<<(a ^ b);
}