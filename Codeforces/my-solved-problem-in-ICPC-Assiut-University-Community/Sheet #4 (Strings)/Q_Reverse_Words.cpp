#include <bits/stdc++.h>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    stringstream ss(line);
    string word;
    vector<string> words;

    while (ss >> word)
    {
        reverse(word.begin(), word.end());
        words.push_back(word);
    }

    for (size_t i = 0; i < words.size(); ++i)
    {
        if (i > 0) cout << " ";
        cout << words[i];
    }

    return 0;
}
