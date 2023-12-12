#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
 
long long gcd(long long num1, long long num2);
 
int main()
{
	long long num1, num2;
	cin>>num1>>num2;
	long long lcd = num1 * num2 / gcd(num1, num2);
	cout<<gcd(num1, num2)<<' '<<lcd;
}
 
long long gcd(long long num1, long long num2)
{
	while(num2 != 0)
	{
		long long temp = num1;
		num1 = num2;
		num2 = temp % num1;
	}
	return num1;
}