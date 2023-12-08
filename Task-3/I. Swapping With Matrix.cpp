#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
const int s = 500;
void swap_row(int arr[s][s],int n, int a, int b);
void swap_column(int arr[s][s],int n, int a, int b);
void print(int arr[s][s], int n);
 
int main()
{
    int size, x, y, arr1[s][s];
    cin>>size>>x>>y;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin>>arr1[i][j];
        }
    }
    swap_row(arr1, size, x, y);
    swap_column(arr1, size, x, y);
    print(arr1, size);
}
 
void swap_row(int arr[s][s], int n, int a, int b)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[a-1][i];
        arr[a-1][i] = arr[b-1][i];
        arr[b-1][i] = temp[i];
    }
}
 
void swap_column(int arr[s][s], int n, int a, int b)
{
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = arr[i][a-1];
        arr[i][a-1] = arr[i][b-1];
        arr[i][b-1] = temp[i];
    }
}
 
void print(int arr[s][s], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<' ';
        }
        cout<<endl;
    }
}