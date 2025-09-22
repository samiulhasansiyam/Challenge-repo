#include <bits/stdc++.h>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;
    return 0;
}


//Time limit 

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     for (int i = a; i > 0; i--)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             cout << i << endl;
//             break;
//         }
//     }
//     return 0;
// }
