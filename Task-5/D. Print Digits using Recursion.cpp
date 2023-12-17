#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int digit(string num, int n, int i);
 
int main() 
{
    int t;
    cin>>t;
    while (t--)
    {
        int i = 0;
        string num;
        cin>>num;
        int n = num.size();
        digit(num, num.size(), i);
        cout<<endl;
    }
}
 
int digit(string num, int n, int i)
{
    if (i == n)
        return 0;
    cout<<num[i++]<<" ";
    digit(num, num.size(), i);
}