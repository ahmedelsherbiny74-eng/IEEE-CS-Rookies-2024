#include <iostream>
using namespace std;
 
int main()
{
    string star;
    cin>>star;
    for (int i = 0; i < star.size(); i++)
    {
        if(star[i] == ',')
            cout<<' ';
            
        else if(star[i] >= 'a' && star[i] <= 'z')
        {
            int temp = star[i] - 32;
            char c = temp;
            cout<<c;
        }
        
        else
        {   
            int temp = star[i] + 32;
            char c = temp;
            cout<<c;
        }
    }
}