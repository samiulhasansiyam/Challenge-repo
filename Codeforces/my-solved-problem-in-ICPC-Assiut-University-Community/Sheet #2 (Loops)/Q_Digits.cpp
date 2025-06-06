#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        int num = a[i];
        do {
            int last = num % 10;
            cout << last;
            num = num / 10;
            if (num > 0) {
                cout << " ";
            }
        } while (num > 0);
        cout << "\n";
    }
    return 0;
}