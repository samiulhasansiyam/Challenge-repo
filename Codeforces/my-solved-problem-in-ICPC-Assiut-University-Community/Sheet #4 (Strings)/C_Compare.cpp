#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x , y ;
    cin >> x ;
    cin >> y ;
    int lx = strlen(x.c_str());
    int ly = strlen(x.c_str());
    int n;
    if (lx > ly)
    {
        n=lx;
    }
    else if (lx < lx)
    {
        n = ly;
    }
    else
    {
        n = lx;
    }
    for (int i=0;i < n;i++)
    {
        if (x[i] < y[i])
        {
            cout << x;
            return 0;
        }
        else if(x[i] > y[i])
        {
            cout << y;
            return 0;
        }
    }
    return 0;
}