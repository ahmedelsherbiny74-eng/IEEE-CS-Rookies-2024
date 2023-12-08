#include <bits/stdc++.h>
using namespace std;
 
long long eqn(int y, int z);
 
int main()
{
    int x, n;
    cin>>x>>n;
    cout<<eqn(x, n)<<endl;
}
long long eqn(int y, int z)
{
    long long sum = 0;
        
    for (int i = 2; i <= z; i += 2)
    {
        sum += pow(y, i);
    }
    return sum;
}