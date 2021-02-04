#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << a << '+' << b << '+' << c << '=' << a + b + c << endl
         << a << '*' << b << '*' << c << '=' << a * b * c << endl
         << '(' << a << '+' << b << '+' << c << ')' << '/' << 3 << '=' << fixed << setprecision(3) << (a + b + c) / 3.0;
    return 0;
}
