#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
const int s = 10000;
void shift_right(long arr1[s], int n, int dis);
void print(long arr1[s], int n);
 
int main()
{
    int size, shift;
    cin>>size>>shift;
    shift %= size;
    long arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    shift_right(arr, size, shift);
    print(arr, size);
}
 
void shift_right(long arr1[s], int n, int dis)
{
    for (int j = 0; j < dis; j++)
    {
        long temp = arr1[n-1];
        for (int i = n - 1; i >= 0; i--)
        {
            arr1[i] = arr1[i-1];
        }
        arr1[0] = temp;
    }
}
 
void print(long arr1[s], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<' ';
    }
}