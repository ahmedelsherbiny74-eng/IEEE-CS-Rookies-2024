#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int c = 1;
    string word;
    getline(cin, word);                     //great....!!man...
    for (int i = 1; i < word.size(); i++)
    {
        if (!(word[i] >= 'A' && word[i] <= 'z') && word[i+1] >= 'A' && word[i+1] <= 'z')
            c++;
    }       
    cout<<c;
}