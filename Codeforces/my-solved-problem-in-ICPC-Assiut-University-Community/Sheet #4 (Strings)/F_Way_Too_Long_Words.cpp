#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    cin >> n;
    vector<string> words(n);
    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }
    for (int i = 0; i < n; i++) {
        long long int length = words[i].length();
        if (length > 10) 
        {
            cout << words[i][0] << (length - 2) << words[i][length - 1] << "\n";
        } else {
            cout << words[i] << "\n";
        }
    }
    return 0;
}