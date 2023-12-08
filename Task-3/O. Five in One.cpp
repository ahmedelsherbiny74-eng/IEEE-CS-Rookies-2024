#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
void max_num(int s[100], int size);
void min_num(int s[100], int size);
void prime_num(int s[100], int size);
void palin_num(int s[100], int size);
void max_div_num(int s[100], int size);
 
int main() 
{
    int size;
    cin>>size;
    int s[size];
    for (int i = 0; i < size; i++)
    {
        cin>>s[i];
    }
    max_num(s, size);
    min_num(s, size);
    prime_num(s, size);
    palin_num(s, size);
    max_div_num(s, size);
}
 
void max_num(int s[100], int size)
{
    int max = s[0];
    for (int i = 1; i < size; i++)
    {
        if (s[i] > max)
            max = s[i];
    }
    cout<<"The maximum number : "<<max<<endl;
}
 
void min_num(int s[100], int size)
{
    int min = s[0];
    for (int i = 1; i < size; i++)
    {
        if (s[i] < min)
            min = s[i];
    }
    cout<<"The minimum number : "<<min<<endl;
}
 
void prime_num(int s[100], int size)
{
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        if (s[i] == 2 || s[i] == 3)
            {
                c++;
                continue;
            }
        else if (s[i] == 1)
            continue;
            
        int sqr = sqrt(s[i]);
        for (int j = 2; j <= sqr; j++)
        {
            if ((s[i] % j) == 0)
                break;
            else if (j == sqr)
                c++;
        }
    }
    cout<<"The number of prime numbers : "<<c<<endl;
}
 
void palin_num(int s[100], int size)
{
    int digit, temp, rev;
    int c = 0;
    for (int i = 0; i < size; i++)
    {
        rev = 0;
        temp = s[i];
        while (s[i] > 0)
        {
            digit = s[i] % 10;
            rev = (rev * 10) + digit;
            s[i] = s[i] / 10;
        }
        if (rev == temp)
            c++;
    }
    cout<<"The number of palindrome numbers : "<<c<<endl;
}
 
void max_div_num(int s[100], int size)
{
    int temp[100];
    for (int i = 0; i < size; i++)
    { 
        int c = 0;
        for (int j = 1; j <= s[i]; j++)
        {
            if ((s[i] % j) == 0)
                c++;
        }
        temp[i] = c;
    }
    int maxc = 0;
    int max = temp[0];
    for (int i = 1; i < size; i++)
    {
        if (temp[i] > max)
        {
            max = temp[i];
            maxc = i;
        } 
    }
    cout<<"The number that has the maximum number of divisors : "<<s[maxc];
}