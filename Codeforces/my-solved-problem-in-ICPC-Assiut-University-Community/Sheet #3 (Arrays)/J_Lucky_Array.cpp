#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    int mini = a[0];
    for(int i = 1; i < n; i++) 
    {
        if(a[i] < mini)
        {
            mini = a[i];
        }
    }
    int count = 0;
    for(int i = 0; i < n; i++) 
    {
        if(a[i] == mini)
        {
            count++;
        }
    }
    if(count % 2 == 1)
    {
        cout << "Lucky";
    }
    else
    {
        cout << "Unlucky";
    }
    return 0;
}