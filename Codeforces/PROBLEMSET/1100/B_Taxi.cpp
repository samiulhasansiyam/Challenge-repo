#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0, taxi = 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count1++;
        }
        else if (a[i] == 2)
        {
            count2++;
        }
        else if (a[i] == 3)
        {
            count3++;
        }
        else if (a[i] == 4)
        {
            count4++;
        }
    }

    taxi = count4;
    while (count3 != 0 && count1 != 0)
    {
        count3 -= 1;
        count1 -= 1;
        taxi += 1;
    }
    if (count1 == 0 && count3 != 0)
    {
        taxi += count3;
        count3 = 0;
    }
    taxi += count2 / 2;
    if (count2 % 2 != 0)
    {
        if (count1 <= 2)
        {
            taxi += 1;
            count2 = 0;
            count1 = 0;
        }
        else
        {
            count1 = count1 - 2;
            taxi = taxi + 1;
            count2 = 0;
        }
    }
    if (count1 != 0)
    {
        taxi = taxi + count1 / 4;
        if (count1 % 4 != 0)
        {
            taxi = taxi + 1;
        }
    }
    cout << taxi;
    return 0;
}
