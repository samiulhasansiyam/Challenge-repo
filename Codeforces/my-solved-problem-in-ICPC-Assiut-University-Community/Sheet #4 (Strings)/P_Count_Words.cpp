#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int count = 0;
    bool word = false;
    char c;
    while ((c = cin.get()) != '\n') 
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) 
        {
            if (!word) 
            {
                count++;
                word = true;
            }
        } 
        else if (c == ' ' || c == '!' || c == '.' || c == '?' || c == ',') 
        {
            word = false;
        }
    }

    cout << count << "\n";
    return 0;
}