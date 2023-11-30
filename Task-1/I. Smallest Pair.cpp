#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    while (x--)
    {
        int sum = 0;
        int min = 10e8;
        int n;
        cin>>n;
        int scar[n];
 
        for (int i = 0; i < n; i++)
        {
            cin>>scar[i];
        }
 
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                sum = scar[i-1] + scar[j-1] + j - i;
                if (sum < min)
                    min = sum;
                sum = 0;
            }
        }
        cout<<min<<endl;
    }
}