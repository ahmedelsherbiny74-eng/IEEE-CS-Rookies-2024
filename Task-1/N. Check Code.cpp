#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int a, b, i;
    int flag = 1;
    cin>>a;
    cin>>b;
    int size = a + b + 1;
    char str[size];
 
    for (i = 0; i < size; i++)
    {
        cin>>str[i];
    }
 
    if (!(str[a] == '-'))
    {
        cout<<"No";
        return 0;
    }
    for (i = 0; i < size; i++)
    {
        if (!(str[i] >= '0' && str[i] <= '9'))
        {
            if (a == i)
                continue;
            cout<<"No";
            flag = 0;
            break;
        }
    }
    if (flag == 1)
        cout<<"Yes";
}