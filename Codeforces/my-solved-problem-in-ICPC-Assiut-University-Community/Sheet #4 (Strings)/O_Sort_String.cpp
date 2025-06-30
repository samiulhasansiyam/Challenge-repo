#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int count[26] = {0};
    char ch;
    for (int i = 0; i < n; i++) 
    {
        cin >> ch;
        count[ch - 'a']++;
    }
    for (int i = 0; i < 26; i++) 
    {
        while (count[i]--) 
        {
            cout << char(i + 'a');
        }
    }
    return 0;
}
