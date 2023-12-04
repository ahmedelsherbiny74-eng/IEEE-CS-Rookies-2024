#include <bits/stdc++.h>
#include <iostream>
using namespace std;
 
int main() 
{
    string code = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string orig = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string form;
    int x;
    
    cin>>x;
    cin>>form;
    
    if (x == 1)
    {
        for (int i = 0; i < form.size(); i++)
        {
            for (int j = 0; j < code.size(); j++)
            {
                if (form[i] == orig[j])
                {
                    cout<<code[j];
                    break;
                }
            }
        }
    }
    
    else
    {
        for (int i = 0; i < form.size(); i++)
        {
            for (int j = 0; j < code.size(); j++)
            {
                if (form[i] == code[j])
                {
                    cout<<orig[j];
                    break;
                }
            }
        }
    }
}