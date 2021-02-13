#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a >= 1 && a <= 12) {
        if (a == 1 || a == 2 || a == 12) {
            cout << "winter";
        }
        if (a == 3 || a == 4 || a == 5){
            cout << "spring";
        }
        if (a == 6 || a == 7 || a == 8) {
            cout << "summer";
        }
        if (a == 9 || a == 10 || a == 11) {
            cout << "autumn";
        }
    } else {
        cout << "NO";
    }
    return 0;
}
