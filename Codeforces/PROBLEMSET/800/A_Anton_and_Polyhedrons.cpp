#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<string> s;
    string t;
    while (cin >> t)
    {
        s.push_back(t);
    }
    int faces = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == "Tetrahedron")
        {
            faces += 4;
        }
        else if (s[i] == "Cube")
        {
            faces += 6;
        }
        else if (s[i] == "Octahedron")
        {
            faces += 8;
        }
        else if (s[i] == "Dodecahedron")
        {
            faces += 12;
        }
        else if (s[i] == "Icosahedron")
        {
            faces += 20;
        }
    }
    cout << faces << endl;
    return 0;
}
