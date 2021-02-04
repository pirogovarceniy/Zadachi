#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int b = a % 10;
    int c = (a % 100) / 10;
    int d = a / 100;
    cout << d << ' ' << c << ' ' << b;
    return 0;
}
