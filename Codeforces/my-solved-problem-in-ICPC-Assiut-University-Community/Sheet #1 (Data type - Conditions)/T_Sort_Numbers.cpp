#include<bits/stdc++.h>
using namespace std;
int main() {
    int n[3];
    cin >> n[0] >> n[1] >> n[2];
    int s[3] = {n[0], n[1], n[2]};
    sort(s, s + 3);
    for (int i = 0; i < 3; i++)
    {
        cout << s[i] << "\n";
    }
    cout << "\n";
    for (int i = 0; i < 3; i++)
    {
        cout << n[i] << "\n";
    }
    return 0;
}