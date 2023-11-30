#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main(void)
{
    int x;
    cin>>x;
    while (x--)
    {
        int n;
        cin>>n;
        int scar[n];
        int max, y, i;
        
        for (i = 0; i < n; i++)
        {
            cin>>scar[i];
            cout<<scar[i]<<' ';
        }
 
        i = y = 0;
        while(true)
        {
            
            if (y == n - 1)
                break;
            
            if (i == y)
            {
                if (scar[i] > scar[i+1])
                    max = scar[i];
                else
                    max = scar[i+1];
            }
            else
            {
                if (max < scar[i+1])
                    max = scar[i+1];
            }
 
            cout<<max<<' ';
            i++;
 
            if (i == n - 1)
            {
                y++;
                i = y;
            }
        }
        cout<<endl;
    }
}