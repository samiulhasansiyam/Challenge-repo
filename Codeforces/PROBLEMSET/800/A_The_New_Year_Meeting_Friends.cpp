#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;

    vector<int> x = {x1, x2, x3};

    sort(x.begin(), x.end());

    cout << (x[2] - x[1]) + (x[1] - x[0]) << endl;

    return 0;
}
