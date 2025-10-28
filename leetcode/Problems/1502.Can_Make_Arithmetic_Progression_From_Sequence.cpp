#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool canMakeArithmeticProgression(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int d = arr[1] - arr[0];
        for (int i = 2; i < arr.size(); i++)
        {
            if ((arr[i] - arr[i - 1]) != d)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution obj;

    vector<int> arr = {3, 5, 1};

    if (obj.canMakeArithmeticProgression(arr))
    {
        cout << "Yes, it can form an arithmetic progression." << endl;
    }
    else
    {
        cout << "No, it cannot form an arithmetic progression." << endl;
    }

    return 0;
}
