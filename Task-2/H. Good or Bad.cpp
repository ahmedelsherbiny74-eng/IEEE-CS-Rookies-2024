#include <iostream>
using namespace std;
 
int main()
{
    int x;
    cin>>x;
    while(x--)
    {
        int flag = 0;
        string scar;
        cin>>scar;
        for (int i = 0; i < scar.size() - 2; i++)
        {
            if (scar[i] == scar[i+2] && scar[i] != scar[i+1])
            {    
                cout<<"Good"<<endl;
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout<<"Bad"<<endl;
    }
}