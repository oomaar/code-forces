#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float A, B;

    cin >> A >> B;
    float divResult = A / B;

    cout << "floor " << A << " / " << B << " = " << floor(divResult) << endl;
    cout << "ceil " << A << " / " << B << " = " << ceil(divResult) << endl;
    cout << "round " << A << " / " << B << " = " << round(divResult) << endl;

    return 0;
}