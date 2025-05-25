#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    char s;
    cin >> a >> s >> b;

    if (s == '+')
    {
    int ans = a + b;
     cout << ans << '\n';
    }
    else if (s == '-')
    {
    int ans = a - b;
     cout << ans << '\n';
    }
    else if (s == '*')
    {
    int ans = a * b;
     cout << ans << '\n';
    }
    else if (s == '/')
    {
    int ans = a / b;
     cout << ans << '\n';
    }
    else 
    {
    cout << "Wrong Input\n";
    }
    return 0;
}