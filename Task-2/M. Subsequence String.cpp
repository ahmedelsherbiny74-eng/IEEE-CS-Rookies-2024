#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() 
{
    string s;
    cin>>s;
    int c = 0;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'h' && c == 0)
            c++;
            
        else if (s[i] == 'e' && c == 1)
            c++;
            
        else if (s[i] == 'l' && (c == 2 || c == 3))
            c++;
            
        else if (s[i] == 'o' && c == 4)
            c++;
    }
    if (c == 5)
        cout<<"YES";
    
    else 
        cout<<"NO";
}