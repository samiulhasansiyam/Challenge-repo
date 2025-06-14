#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n ;
    cin >> n;
    int last=n*4;
    for(int i=1;i<=last;i++)
    {
        if (i%4==0)
        {
        cout << "PUM" << "\n" ;
        }
        else
        {
            cout << i << " ";
        }
    }
    return 0;
}