#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int n, m;
    while (true) 
    {
        cin >> n >> m;
        if (n <= 0 || m <= 0)
        {
            break;
        }
        int start = n < m ? n : m;
        int end = n > m ? n : m;
        int sum = 0;
        for (int i = start; i <= end; i++) 
        {
            cout << i << " ";
            sum += i;
        }
        cout << "sum =" << sum << "\n" ;
    }
return 0 ;
}