#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
const int s = 10001;
void merge(int test[s], int n);
 
int main()
{
    int n;
    cin>>n;
    int star[s];
    int scar[s];
    for (int i = 0; i < n; i++)
    {
        cin>>star[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>scar[i];
    }
    merge(scar, n);
    merge(star, n);
}
void merge(int test[s],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<test[i]<<" ";
    }
}