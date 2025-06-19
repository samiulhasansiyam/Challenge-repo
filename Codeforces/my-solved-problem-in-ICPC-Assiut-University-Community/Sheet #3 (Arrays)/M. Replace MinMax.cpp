#include<bits/stdc++.h>
using namespace std;
int main ()
{
int n;
cin >> n;
vector<int> a(n);
for(int i=0;i<n;i++)
{
cin >> a[i];
}
    int min = a[0];
    int p1 = 0; 
    for (int i = 1; i < n; i++) 
    {
        if (a[i] < min) 
        {
            min = a[i];
            p1 = i;
        }
    }
    int max = a[0];
    int p2 = 0; 
    for (int i = 1; i < n; i++) 
    {
        if (a[i] > max) 
        {
            max = a[i];
            p2 = i;
        }
    }
    int b=a[p1];
    a[p1]=a[p2];
    a[p2]=b;
    
    for(int i=0;i<n;i++)
{
cout << a[i] << " ";
}
return 0;
}