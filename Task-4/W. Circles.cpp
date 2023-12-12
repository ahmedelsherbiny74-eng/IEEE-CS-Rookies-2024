#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    double c1x1, c1y1, c1x2, c1y2, c2x1, c2y1, c2x2, c2y2;
    cin>>c1x1>>c1y1>>c1x2>>c1y2;
    cin>>c2x1>>c2y1>>c2x2>>c2y2;
 
    double c1x = (c1x1 + c1x2) / 2;                                     //centers of the two circles
    double c1y = (c1y1 + c1y2) / 2;
    double c2x = (c2x1 + c2x2) / 2;
    double c2y = (c2y1 + c2y2) / 2;
 
    double d = sqrt(pow(c2x - c1x, 2) + pow(c2y - c1y, 2));             //distance between the two circles
                                            
    double r1 = sqrt(pow(c1x2 - c1x1, 2) + pow(c1y2 - c1y1, 2)) / 2;    //radii of the two circles
    double r2 = sqrt(pow(c2x2 - c2x1, 2) + pow(c2y2 - c2y1, 2)) / 2;
 
    if (d > (r1 + r2))
        cout<<"NO";
    else
        cout<<"YES";
}