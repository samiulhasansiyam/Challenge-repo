#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num ;

    while(num >= 10)
    {
        num = num / 10 ;
    }
    if(num%2==0)
    {
        cout << "EVEN" ;
    }
    else
    {
        cout << "ODD" ;
    }
   return 0;
}