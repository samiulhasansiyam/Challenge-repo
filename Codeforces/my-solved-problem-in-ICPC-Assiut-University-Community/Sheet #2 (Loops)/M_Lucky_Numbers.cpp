#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a, b;
    cin >> a >> b;
    bool fou = false;
    for (int i = a; i <= b; i++) 
    {
        int n = i;
        bool isF = true;
        while (n > 0) 
        {
            int d = n % 10;
            if (d != 4 && d != 7) 
            {
                isF = false;
                break;
            }
            n /= 10;
        }
        if (isF) 
        {
            cout << i << " ";
            fou = true;
        }
    }
    if (!fou) 
    {
        cout << -1;
    }
    cout << endl;
    return 0;
}