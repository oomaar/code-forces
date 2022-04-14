#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, d = 0;

    cin >> a >> b;

    for (int i = 0; i <= 32; i++)
    {
        int x = a % 2;
        a = a / 2;

        int y = b % 2;
        b = b / 2;

        if (x != y)
        {
            d = d + pow(2, i);
        }
    }

    cout << d << endl;

    return 0;
}