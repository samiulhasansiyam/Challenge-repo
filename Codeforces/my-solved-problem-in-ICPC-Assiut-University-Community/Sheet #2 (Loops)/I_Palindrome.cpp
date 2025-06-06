#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n, reverse=0 ;
    cin >> n ;
    int n1=n ;
    while (n != 0)
    {
        int digit = n % 10 ;
        reverse = reverse * 10 + digit ;
        n /= 10 ;
    }
    cout << reverse  << "\n" ;

    if(n1 != reverse)
    {
       cout << "NO" ;
    }
    else
    {
        cout << "YES" ;
    }
return 0 ;
}