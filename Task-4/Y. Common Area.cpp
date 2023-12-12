#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;                                             // number of test cases
	int counter = 1;
	while (counter <= t)
	{
	    int n;
	    cin>>n;                                         // number of triangles
	    int x1, y1, x2, y2, maxx1, maxy1, minx2, miny2;
	    cin>>x1>>y1>>x2>>y2;
	    maxx1 = x1;
	    maxy1 = y1;
	    minx2 = x2;
    	miny2 = y2;
    	for (int i = 1; i < n; i++)
    	{
    	    cin>>x1>>y1>>x2>>y2;
    	    maxx1 = max(maxx1, x1);                     // to find the common points between two triangles in a sequential manner
    	    maxy1 = max(maxy1, y1);
    	    minx2 = min(minx2, x2);
    	    miny2 = min(miny2, y2);
    	}
    	if((minx2 > maxx1) && (miny2 > maxy1))
    	    cout<<"Case #"<<counter<<": "<<(minx2 - maxx1) * (miny2 - maxy1)<<endl;
    	   
    	else
    	    cout<<"Case #"<<counter<<": "<<0<<endl;
    	
    	counter++;
	}
}