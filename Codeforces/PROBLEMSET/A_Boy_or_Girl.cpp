#include <bits/stdc++.h>
using namespace std;

int main()
{
    string username;
    cin >> username;

    int count[26] = {0};
    int distinct = 0;

    for (char ch : username)
    {
        int index = ch - 'a';
        if (count[index] == 0)
        {
            distinct++;
            count[index] = 1;
        }
    }

    if (distinct % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
