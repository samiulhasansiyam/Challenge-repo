#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int i = max_element(arr.begin(), arr.end()) - arr.begin();
        return i;
    }
};

int main()
{
    Solution s;

    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of mountain array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int peakIndex = s.peakIndexInMountainArray(arr);

    cout << "Peak index: " << peakIndex << endl;
    cout << "Peak element: " << arr[peakIndex] << endl;

    return 0;
}
