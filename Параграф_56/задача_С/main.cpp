#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x, y;
    cin >> x;
    x = x * x;
    y = x;
    x = x * x;
    x = x * x;
    x = x * y;
    cout << fixed << setprecision(3) << x;
    return 0;
}
