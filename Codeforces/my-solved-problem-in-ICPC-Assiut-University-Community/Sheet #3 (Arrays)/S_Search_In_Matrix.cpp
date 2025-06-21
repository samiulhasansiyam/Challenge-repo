#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int mat[100][100];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            cin >> mat[i][j];
        }
    }
    int x;
    cin >> x;
    bool count = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (mat[i][j] == x) 
            {
                count =count+1;
                break;
            }
        }
    }
    if (count == 1)
    {
        cout << "will not take number\n";
    }
    else
    {
        cout << "will take number\n";
    }
    return 0;
}