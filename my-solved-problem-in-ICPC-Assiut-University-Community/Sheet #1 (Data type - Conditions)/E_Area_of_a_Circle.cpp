#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double r, a;
    const double pi= 3.141592653;
    cin >> r;
    a = pi * r * r;
    cout << fixed << setprecision(9) << a << endl;
    return 0;
}