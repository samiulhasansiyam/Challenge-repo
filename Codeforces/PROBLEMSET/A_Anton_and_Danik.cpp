#include <bits/stdc++.h>
using namespace std;
int main()
{
    int gamePlayed, Anton = 0, Danik = 0;
    cin >> gamePlayed;
    char round[gamePlayed];
    for (int i = 0; i < gamePlayed; i++)
    {
        cin >> round[i];
    }
    for (int i = 0; i < gamePlayed; i++)
    {
        if (round[i] == 'A')
        {
            Anton += 1;
        }
        else
        {
            Danik += 1;
        }
    }

    if (Danik < Anton)
    {
        cout << "Anton" << endl;
    }
    else if (Danik > Anton)
    {
        cout << "Danik" << endl;
    }
    else if (Danik == Anton)
    {
        cout << "Friendship" << endl;
    }
    return 0;
}