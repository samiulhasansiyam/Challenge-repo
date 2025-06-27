#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    string word = "EGYPT";
    size_t pos;
    while ((pos = s.find(word)) != string::npos) 
    {
        s.replace(pos, word.length(), " ");
    }
    cout << s << "\n";
    return 0;
}
