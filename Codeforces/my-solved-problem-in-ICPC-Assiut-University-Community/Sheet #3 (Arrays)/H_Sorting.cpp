#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i=0; i<n ; i++)
    {
        cin >> a[i];
    }
    for(int i=0; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[j],a[i]);
            }
        }
    }
    for(int i=0; i<n ; i++)
    {
        cout << a[i] << " " ;
    }
    return 0;
<<<<<<< HEAD
}
=======
}
>>>>>>> e8d05d2271caa4625627d1449e95e2920c8e89b9
