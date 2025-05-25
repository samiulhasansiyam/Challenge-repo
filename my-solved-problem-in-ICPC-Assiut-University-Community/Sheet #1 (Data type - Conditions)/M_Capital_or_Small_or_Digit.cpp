#include<bits/stdc++.h>
using namespace std;
int main()
{
char n;
cin>> n;
if (n>='a' && n<='z')
{
cout<< "ALPHA\nIS SMALL" ;
}
else if (n>='A' && n<='Z')
{
cout<< "ALPHA\nIS CAPITAL" ;
}
else if (n>='0' && n<='9')
{
cout<< "IS DIGIT" ;
}
return 0;
}