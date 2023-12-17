#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
long long input;
bool reach_Value(long long num)
{
	if (input < num)
		return false;
    else if (input == num)
		return true;
    else   
		return reach_Value(num * 10) || reach_Value(num * 20);
    
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>input;
		if(reach_Value(1))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}