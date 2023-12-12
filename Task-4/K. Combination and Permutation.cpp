#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main() 
{
    long long n, r;
    cin>>n>>r;
    long long p = 1;                        // npr = n! / (n-r)!
    for (int i = n; i > (n - r); i--)       // 16p3 = 16! / (16-3)! = 16! / 13! = 16*15*14
    {                                       
        p *= i;
    }
    
    long long fact_r = 1;
    for (long long i = r; i > 1; i--)       // ncr = n! / r!*(n-r)!
    {                                       // 16c3 = 16! / 3! * (16-3)! = npr / r!
        fact_r *= i;
    }
    
    cout<<(p / fact_r)<<' '<<p;
}