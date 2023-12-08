#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
bool Is_prime(int s);
 
int main()
{
	int size;
	cin>>size;
	while (size--)
	{
		int s;
		cin>>s;
		if(s == 1)
		{
			cout<<"NO"<<endl;
			continue;
		}
		if (Is_prime(s) == 1)  
			cout<<"NO"<<endl;
	    else   
			cout<<"YES"<<endl;
	}
}
 
bool Is_prime(int s)
{ 
    int flag = 0;
    for(int i = 2; i <= sqrt(s); i++)
    {
        if(s % i == 0)
        {
 		    flag = 1;
 		    break;
	    }
    }
    return flag;
}