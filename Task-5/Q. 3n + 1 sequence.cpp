#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int collatz_loop(int n, int c);
 
int main() 
{
    int c = 0;
    int n;
    cin>>n;
    collatz_loop(n, c);
}
 
int collatz_loop(int n, int c)
{
    if (n == 1)
    {
        c++;
        cout<<c;
    }
    else if (n % 2 == 0)
    {
        c++;
        return collatz_loop(n / 2, c);
    }
    else
    {
        c++;
        return collatz_loop(3 * n + 1, c);
    }
}