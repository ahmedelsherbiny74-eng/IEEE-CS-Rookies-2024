#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int i, n;
    int flag = 1;
    cin>>n;
    int scar[n];
 
    for (i = 0; i < n; i++)
    {
        cin>>scar[i];
    }
    int x = 0;
 
    while(true)
    {
        for (i = 0; i < n; i++)
        {
            if ((scar[i] % 2) != 0)
            {
                flag = 0;
                break;
            }
            scar[i] = scar[i] / 2;
            x++;
        }
        if (flag == 0)
        {
            cout<<x/n;
            return 0;
        }
    }
}
