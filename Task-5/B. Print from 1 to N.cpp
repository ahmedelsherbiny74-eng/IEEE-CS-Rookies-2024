#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int from1_to_n(int n, int c);
 
int main() 
{
    int n;
    cin>>n;
    int c = 1;
    from1_to_n(n, c);
}
 
int from1_to_n(int n, int c)
{
    if (c == n)
    {
        cout<<c;
        return 0;
    }
    else
        cout<<c++<<endl;
    from1_to_n(n, c);
}