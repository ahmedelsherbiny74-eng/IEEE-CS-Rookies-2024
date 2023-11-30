#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, i;
    int minc = 0;
    int maxc = 0;

    cin >>N;
    int scar[N];

    for (i = 0; i < N; i++)
    {
        cin >> scar[i];
    }

    int min = scar[0];
    int max = scar[0];

    for (i = 1; i < N; i++)
    {
        if(min > scar[i])
        {
            min = scar[i];
            minc = i;
        }

        if(max < scar[i])
        {
            max = scar[i];
            maxc = i;
        }
    }
    scar[minc] = max;
    scar[maxc] = min;

    for (i = 0; i < N; i++)
    {
        cout<<scar[i]<<" ";
    }
}
