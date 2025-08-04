#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long L, R;
        cin >> L >> R;
        long long n = R - L + 1;
        long long sum = n * (L + R) / 2;
        cout << sum << endl;
    }
    return 0;
}