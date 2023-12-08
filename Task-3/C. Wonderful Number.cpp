#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
bool odd(int x);
bool palindrome(int x);
 
int main() 
{
    int n;
    cin>>n;
    if (odd(n))
        {
            if (palindrome(n))
                cout<<"YES";
            else
                cout<<"NO";
        }
    else
        cout<<"NO";
}
 
bool odd(int x)
{
    if ((x % 2) == 1)
        return true;
    return false;
}
 
bool palindrome(int x)
{
    int mod;
    string s1, s2;
    while (x)
    {
        mod = x % 2;
        x = x / 2;
        if (mod == 0)
            s1 += "0";
        else 
            s1 += "1";
    }
    s2 = s1;
    reverse (s2.begin(), s2.end());
    if (s1 == s2)
        return true;
    return false;
}