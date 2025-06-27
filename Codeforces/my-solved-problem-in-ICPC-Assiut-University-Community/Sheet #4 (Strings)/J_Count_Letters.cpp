#include <bits/stdc++.h>
using namespace std;
int main()
{
string x;
cin>>x;
int arr[26]={0};
for(int i=0;i<x.size();i++)
{
arr[x[i]-'a']++;
}
for(int i=0;i<26;i++)
{
if(arr[i]>0)
{
cout<<char(i+'a')<<" : "<<arr[i]<< "\n";
}
}
return 0;
}