#include<bits/stdc++.h>
using namespace std;
int main()
{
 double a,b,f,c,r;
 cin>> a >> b;
 f=floor(a / b);
 c=ceil(a / b);
 r=round(a / b);
cout << "floor " << a << " / " << b << " = " << f << '\n';
cout << "ceil " << a << " / " << b << " = " << c << '\n';
cout <<"round " << a << " / " << b << " = " << r << '\n';
return 0;
}