#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++) 
    {
        int keep = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (a[j] < a[keep]) 
            {
                keep = j;
            }
        }
        int temp = a[i];
        a[i] = a[keep];
        a[keep] = temp;
    }
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    return 0;
}