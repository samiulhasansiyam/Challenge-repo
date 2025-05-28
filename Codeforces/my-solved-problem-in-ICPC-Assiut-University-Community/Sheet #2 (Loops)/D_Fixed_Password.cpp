#include<bits/stdc++.h>
using namespace std;

int main() {
    const int password = 1999;
    int x;
    
    while (cin >> x) {
        if (x == password) {
            cout << "Correct\n" ;
            return 0;
        } else {
            cout << "Wrong\n";
        }
    }
    
    return 0;
}



// this one is not working in codeforces //wrong in testcase 2.

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//  vector<long long int> a(4);
// for(int i=0;i<=4-1;i++)
// {
//     cin >> a[i] ;
// }
// for(int i=0;i<=4-1;i++)
// {
//     if(a[i]==1999)
//     {
//         cout << "Correct" ;
//         return 0;
//     }
//     else
//     {
//         cout << "Wrong\n" ;
//     }

// }

// return 0;
// }
