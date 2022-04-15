#include <iostream>
using namespace std;

int main()
{
    double n, k, a;

    cin >> n >> k >> a;

    double result = (n * k) / a;
    long long longNumber = result;
    double newResult = result - longNumber;

    if (newResult > 0)
    {
        cout << "double" << endl;
    }
    else if (longNumber <= 2147483647)
    {
        cout << "int" << endl;
    }
    else
    {
        cout << "long long" << endl;
    }

    return 0;
}