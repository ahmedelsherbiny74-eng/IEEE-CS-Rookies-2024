#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int i, j, x, y, z, flag;
    cin>>x>>y;
    int word[x];
    int bond[y];
    z = flag = 0;
 
    for (i = 0; i < x; i++)
    {
        cin>>word[i];
    }
 
    for (i = 0; i < y; i++)
    {
        cin>>bond[i];
        for (j = z; j < x; j++)
        {
            if (bond[i] == word[j])
            {
                z = j + 1;
                flag++;
                break;
            }
        }
    }
    if (flag == y)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}