#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main(void)
{
    int x;
    cin>>x;
    while (x--)
    {                                                  
        int n, i, z, c = 0;          
        cin>>n;                         
        int scar[n];
        
        for (i = 0; i < n; i++)
        {
            cin>>scar[i];
            c++;
        }
 
        i = z = 0;
        while(true)
        {
            if (z == n - 1)
            {
                break;
            }
            if (scar[i] > scar[i+1])
            {   
                z++;
                i = z;
                continue;
            }
            c++;
            i++;
            if (i == n -1)
            {
                z++;
                i = z;
            }    
        }
        cout<<c<<endl;
    }
}