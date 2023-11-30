#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int a = 0, b, i, j, temp;
    cin>>b;
    int word[b],bond[b];
    for (i = 0; i < b; i++)
    {
        cin>>word[i];
    }
    for (i = 0; i < b; i++)
    {
        cin>>bond[i];
    }
    for (i = 0; i < b; i++)
    {
        for (j = i; j < b; j++)
        {
            if (word[i] == bond[j])
            {
                a++;
                temp = bond[j];
                bond[j] = bond[i];
                bond[i] = temp;
                break;
            }
        }
    }
    if (a == b)
        cout<<"yes";
    else
        cout<<"no";
}