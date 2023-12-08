#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int number1_to_n(int n); 
 
int main() 
{
    int n;
    cin>>n;
    number1_to_n(n);
}
 
int number1_to_n (int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout<<i;
        if (i < n)
            cout<<' ';
    }
}