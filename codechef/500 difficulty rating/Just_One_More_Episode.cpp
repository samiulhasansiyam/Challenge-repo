#include <bits/stdc++.h>
using namespace std;
void yesOrNo(int a)
{
    int b = a;
    if (b <= 24)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        yesOrNo(a);
    }
    return 0;
}
