#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        int smallest = INT_MAX; //max value that  int can contain  

        for (int i = 0; i < n; i++) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                int sum = a[i] + a[j] + (j - i);
                smallest = min(smallest, sum); // function to search small value 
            }
        }

        cout << smallest << "\n";
    }

    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t, keep,sum,d;
//     cin >> t;
//     int n;
//     cin >> n;
//     vector<long long int> a(n);
//     for(int i=1;i<=n;i++)
//     {
//         cin >> a[i];
//     }
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=i+1;j<=n;j++)
//         {
            
//             sum=(a[i]+a[j])+(j-i);
//             d=sum;
//             if (keep > d)
//             {
//                 keep = d;
//             }
//         }
//     }
//     cout << keep ;
//     return 0;
// }