#include <bits/stdc++.h>
using namespace std;
void max_min(vector<int> & arr, int n)
{
    int max = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    int min = arr[0];
    for(int i = 1; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << " " << max << endl;
}

int main() {
    int n; cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max_min(arr,n);
    return 0;
}
