#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(9);
    double R;

    cin >> R;

    double pi = 3.141592653;
    double sqrtR = R * R;

    cout << pi * sqrtR << endl;
    return 0;
}