#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
double avr(int arr[100], int n);
 
int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<fixed<<setprecision(6)<<avr(arr, n);
}
 
double avr(int arr[100], int n)
{
    static int i = 0;
    static long long sum = 0;
    sum += arr[i++];
    
    if (i == n)
    {
        double average = sum / n;
        return average;
    }   
    avr(arr, n);
}