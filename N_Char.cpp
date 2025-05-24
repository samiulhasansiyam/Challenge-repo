#include<bits/stdc++.h>
using namespace std;
int main()
{
char n, s;
    cin >> n;
if (n >= 'a' && n <= 'z')
{
    s = n - 32;
    cout << s << endl;
}
else if (n >= 'A' && n <= 'Z') 
{
s = n + 32;
cout << s << endl;
}
else {
cout << "Not English letter" << endl;
}
return 0;
}