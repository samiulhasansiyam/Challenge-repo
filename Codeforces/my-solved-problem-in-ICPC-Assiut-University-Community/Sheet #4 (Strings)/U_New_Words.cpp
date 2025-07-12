#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    map<char, int> freq;

    for (char c : s)
    {
        freq[toupper(c)]++;
    }

    int minCount = min({freq['E'], freq['G'], freq['Y'], freq['P'], freq['T']});
    cout << minCount << endl;

    return 0;
}
