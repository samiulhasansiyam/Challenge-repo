#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int n1 = n * 2;
        vector<int> a(n1);
        int odd = 0, even = 0;
        for(int i = 0; i < n1; i++)
        {
            cin >> a[i];
            if(a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }

        if(odd == n && even == n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}