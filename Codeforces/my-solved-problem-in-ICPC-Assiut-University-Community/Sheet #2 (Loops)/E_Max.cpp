#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n,keep ;
    cin >> n ;
    vector<int> a(n) ;
    for (int i = 0; i < n ; i++)
    {
        cin >> a[i] ;
    }
    keep = a[0];
    for(int i = 1 ; i < n ; i++)
    {
        if(a[i] > keep)
        {
            keep = a[i] ;
        }
    }
    cout << keep ;
}