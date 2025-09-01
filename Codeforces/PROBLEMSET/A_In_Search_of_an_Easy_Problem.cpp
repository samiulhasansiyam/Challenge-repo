#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool easyOrHard = true;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            easyOrHard = false;
            break;
        }
    }

    if (easyOrHard == true)
    {
        cout << "EASY" << endl;
    }
    else
    {
        cout << "HARD" << endl;
    }

    return 0;
}
