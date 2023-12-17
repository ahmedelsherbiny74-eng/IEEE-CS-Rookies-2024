#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int collatz_loop(int n);
 
int main() 
{
    int n;
    cin>>n;
    collatz_loop(n);
}
 
int collatz_loop(int n)
{
    static int c = 0;
    
    if (n == 1)
    {
        c++;
        cout<<c;
    }
    else if (n % 2 == 0)
    {
        c++;
        return collatz_loop(n / 2);
    }
    else
    {
        c++;
        return collatz_loop(3 * n + 1);
    }
}