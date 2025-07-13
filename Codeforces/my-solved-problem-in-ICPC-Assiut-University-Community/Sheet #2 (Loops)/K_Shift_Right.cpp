#include <bits/stdc++.h>
using namespace std;

void shiftRight(vector<int>& arr, int k) {
    int n = arr.size();
    k %= n;
    vector<int> result(n);

    for (int i = 0; i < n; i++) {
        result[(i + k) % n] = arr[i];
    }

    arr = result;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    shiftRight(arr, k);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
