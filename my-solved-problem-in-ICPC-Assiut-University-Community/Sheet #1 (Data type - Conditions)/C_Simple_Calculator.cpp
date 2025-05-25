#include<iostream>
using namespace std;
 
int main(){
    long long x, y;
    cin >> x >> y;
    
    int sum = x + y;
    long long mul = x * y;
    int sub = x - y;
    
    cout << x << " + " << y << " = " << sum << endl;
    cout << x << " * " << y << " = " << mul << endl;
    cout << x << " - " << y << " = " << sub << endl;
 
return 0;
}