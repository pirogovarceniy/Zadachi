#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, x;
    int d = b - a;
    cin >> a >> b;
    x = a + rand() % (b-a);
    cout << x << ' ';
    x = a + rand() % (b-a);
    cout << x << ' ';
    x = a + rand() % (b-a);
    cout << x << ' ';
    x = a + rand() % (b-a);
    cout << x << ' ';
    x = a + rand() % (b-a);
    cout << x << ' ';
    return 0;
}
