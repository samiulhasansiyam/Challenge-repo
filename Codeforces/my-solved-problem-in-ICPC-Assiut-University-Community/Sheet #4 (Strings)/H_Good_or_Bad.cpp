#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n=s.size();
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
            {
            cout << "Good" << "\n";
            flag=true;
            break;
            }
            else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
            {
            cout << "Good" << "\n";
            flag=true;
            break;
            }
        }
            if(flag== false)
            {
            cout << "Bad" << "\n";
            }
    }
    return 0;
}
