#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum=0;
    cin >> n;
    string num;
    cin >> num;
    for(int i=0;i<n;i++)
    {
        int p=num[i]-'0';
        sum=sum+p;
    }
    cout << sum << "\n";
    return 0;
}