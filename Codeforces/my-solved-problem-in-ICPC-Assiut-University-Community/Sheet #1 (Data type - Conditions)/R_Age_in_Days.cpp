#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n , years ,month , day;
 cin >> n ;
 years = n / 365 ;
 month = (n % 365) / 30;
 day = (n % 365) % 30;
cout << years << " years\n" << month <<" months\n" << day << " days\n";
return 0;
}